import { Injectable } from '@angular/core';
import { agentRandomizerService } from './agentRandomizer.service';
import { gun } from 'src/environments/interfaces/gun';
import { guns } from 'src/environments/interfaces/guns';

@Injectable({
  providedIn: 'root'
})
export class GunRandomizerService {
  private matrix: gun[][] = [];
  private choosenPrimary = 0;
  private choosenSecondary = 0;
  private choosenList: guns[] = [];

  constructor(private agentRandomizer: agentRandomizerService) { }
  choosenMaker(primary:number, secondary: number){
    const gunsTS: guns = {
      secondIcon: this.matrix[1][primary].icon,
      icon: this.matrix[0][secondary].icon
    }

    return gunsTS;
  }
  chooseGun(){
    this.matrix = JSON.parse(localStorage.getItem("gunMatrix") ?? "erro")

    for (let index = 0; index < 5; index++) {
      this.choosenPrimary = this.agentRandomizer.getRandomInt(this.matrix[1].length);
      this.choosenSecondary = this.agentRandomizer.getRandomInt(this.matrix[0].length);
      this.choosenList[index] = this.choosenMaker(this.choosenPrimary, this.choosenSecondary)
    }
    
    return this.choosenList;
    
      
  }
}
