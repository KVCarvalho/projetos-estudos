import { Component } from '@angular/core';

@Component({
  selector: 'app-main-area',
  templateUrl: './main-area.component.html',
  styleUrls: ['./main-area.component.css']
})
export class MainAreaComponent {
  cards: number[] = [];
  constructor(){
    this.cards = [0]
  }
}
