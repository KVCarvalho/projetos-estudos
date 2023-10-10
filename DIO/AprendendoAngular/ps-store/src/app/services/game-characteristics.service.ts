import { Injectable } from '@angular/core';
import { dataFake } from "../../dataFake/dataFake";
import { environment } from "../../environments/environment";

@Injectable({
  providedIn: 'root'
})
export class GameCharacteristicsService {
  
  constructor() {}

  getGameInfo(identifier:number){
    return dataFake[identifier];
  }
  beIdentificator(){
    environment.identifier++;
  }
  
}
