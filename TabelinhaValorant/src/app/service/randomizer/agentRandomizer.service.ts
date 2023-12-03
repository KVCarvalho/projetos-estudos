import { Injectable } from '@angular/core';
import { agent } from 'src/environments/interfaces/agent';

@Injectable({
  providedIn: 'root'
})
export class agentRandomizerService {
  private choosenList: agent[] = [];
  private matrix: agent[][] = [];
  private flex!: agent;
  private countDiff = 0;
  private choosen = 0;


  constructor() { }
  
getRandomInt(arrayLength: number): number {
  arrayLength = Math.floor(arrayLength);
  return Math.floor(Math.random() * arrayLength);
}


getFlex() {
  let flexRole = this.getRandomInt(3);
  let flexAndress = this.getRandomInt(this.matrix[flexRole].length)
  return this.matrix[flexRole][flexAndress];
}
chooseAgent() {

  this.matrix = JSON.parse(localStorage.getItem("agentMatrix") ?? "erro");
    for (let index = 0; index < 5; index++) {

      
      if (index < 4) {
        this.choosen = this.getRandomInt(this.matrix[index].length);
        this.choosenList.push(this.matrix[index][this.choosen]);

      } else {
        do{

          this.flex = this.getFlex();

          this.choosenList.forEach((element: agent) => {
            if (element.id !== this.flex.id) {
              this.countDiff++;
            } else {
              this.countDiff = 0;
            }
          })
        }
        while (this.countDiff < this.choosenList.length)  

        this.choosenList.push(this.flex)
      }
    }
    return this.choosenList; 
}

}


