import { Component } from '@angular/core';
import { ApiConsumeService } from 'src/app/api-consume.service';

@Component({
  selector: 'app-result-screen',
  templateUrl: './result-screen.component.html',
  styleUrls: ['./result-screen.component.css']
})
export class ResultScreenComponent {
  agent: Number[] = [0, 1, 2]
  strat: String[] = ["Troll AIM", "Sem Ultimate", "Foguete não tem ré"]
  constructor(private ApiConsume: ApiConsumeService){
    //console.log(this.ApiConsume.consume(false));
  }
}
