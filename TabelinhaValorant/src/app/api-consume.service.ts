import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class ApiConsumeService {

  constructor() { }

  private urlAgent = "https://valorant-api.com/v1/agents/";
  private urlGuns = "https://valorant-api.com/v1/weapons";
  private url:string = "";
  

  consume(agents:boolean){
    
      if (agents) {
          this.url = this.urlAgent;
      } else {
          this.url = this.urlGuns;
          }

      fetch(this.url)
      .then((response) => response.json())
      .then((json) => json.data)
      .then((List) => console.log(List))
  }
}
