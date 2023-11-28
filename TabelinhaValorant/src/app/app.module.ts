import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { StartScreenComponent } from "./start-screen/start-screen.component";
import { ConfigurationScreenComponent } from './configuration-screen/configuration-screen.component';
import { ResultScreenComponent } from './result/result-screen/result-screen.component';
import { ResultCardComponent } from './result/result-card/result-card.component';


@NgModule({
  declarations: [
    AppComponent,
    StartScreenComponent,
    ConfigurationScreenComponent,
    ResultScreenComponent,
    ResultCardComponent,
  ],
  imports: [
    BrowserModule,
    AppRoutingModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
