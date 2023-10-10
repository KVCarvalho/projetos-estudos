import { Component, Input } from '@angular/core';
import { GameCharacteristicsService } from "../../services/game-characteristics.service";
import { environment } from "../../../environments/environment";

@Component({
  selector: 'app-game-card',
  templateUrl: './game-card.component.html',
  styleUrls: ['./game-card.component.css']
})
export class GameCardComponent{

  coverImg: string = "";
  isExclusive: string = "";
  buyOrPlay: string = "";
  plataform: string = "";
  isFullGame: string = "";
  price: string = "";


  constructor(private service: GameCharacteristicsService){
    const gameInfo = this.service.getGameInfo(environment.identifier);
    this.coverImg = gameInfo.coverImg;
    this.isExclusive = gameInfo.isExclusive;
    this.buyOrPlay = gameInfo.buyOrPlay;
    this.plataform = gameInfo.plataform;
    this.isFullGame = gameInfo.isFullGame;
    this.price = gameInfo.price;
    service.beIdentificator();
  }

}
