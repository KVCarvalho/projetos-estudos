import { Injectable } from '@angular/core';
import { agent } from 'src/environments/interfaces/agent';
import { choosen } from 'src/environments/interfaces/choosen';
import { agentRandomizerService } from './agentRandomizer.service';
import { GunRandomizerService } from './gun-randomizer.service';
import { guns } from 'src/environments/interfaces/guns';


@Injectable({
  providedIn: 'root'
})
export class CoreRandomizerService {
  private arrayAgent: agent[] = [];
  private arrayGun: guns[] = [];
  private arrayChoosen: choosen[] = [];
  private finalChoosen: choosen[] = [];

  private arrayLength = 0;
  private finalOrder = 0;

  constructor(private agentRandomizer: agentRandomizerService, private gunRandomizer: GunRandomizerService) { }

  makeChoosen(index: number): choosen{
    const choosenTS: choosen = {
      id: this.arrayAgent[index].id,
      portrait: this.arrayAgent[index].portrait,
      background: this.arrayAgent[index].background,
      colors: this.arrayAgent[index].colors,
      roleIcon: this.arrayAgent[index].roleIcon,
      secondIcon: this.arrayGun[index].secondIcon,
      icon: this.arrayGun[index].icon
    }
    return choosenTS;
  }
  randomizer(): choosen[]{

    this.arrayAgent = this.agentRandomizer.chooseAgent();
    this.arrayGun = this.gunRandomizer.chooseGun();

    this.arrayLength = this.arrayAgent.length;

    for (let index = 0; index < this.arrayAgent.length; index++) {
      this.arrayChoosen.push(this.makeChoosen(index))
    }

    for (let index = 0; index < this.arrayAgent.length; index++) {
      if (index < this.arrayAgent.length) {
        this.finalOrder = this.agentRandomizer.getRandomInt(this.arrayLength);
        this.finalChoosen.push(this.arrayChoosen[this.finalOrder]);
        this.arrayChoosen.splice(this.finalOrder, 1);
        this.arrayLength--;

      } else {
        this.arrayChoosen.push(this.arrayChoosen[0]);
      }
      
    }
    return this.finalChoosen;
  }

}
