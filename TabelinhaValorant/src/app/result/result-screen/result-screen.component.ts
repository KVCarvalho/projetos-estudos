import { Component } from '@angular/core';
import { ApiConsumeService } from 'src/app/service/api-consume.service';
import { CoreRandomizerService } from 'src/app/service/randomizer/core-randomizer.service';
import { StratRandomizerService } from 'src/app/service/randomizer/strat-randomizer.service';
import { choosen } from 'src/environments/interfaces/choosen';

@Component({
  selector: 'app-result-screen',
  templateUrl: './result-screen.component.html',
  styleUrls: ['./result-screen.component.css']
})
export class ResultScreenComponent {
  stratList: String[] = []
  choosenList: choosen[]=[];

  constructor(private apiConsume: ApiConsumeService, private coreRandomizer: CoreRandomizerService, private stratRandomizer: StratRandomizerService){
    this.apiConsume.consumeAPI(true);
    this.apiConsume.consumeAPI(false);
    
    this.choosenList = this.coreRandomizer.randomizer();
    this.stratList = this.stratRandomizer.randomizer();

  }
}
