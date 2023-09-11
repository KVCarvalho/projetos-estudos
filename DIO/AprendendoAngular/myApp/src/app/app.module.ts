import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { NewComponent } from "./components/new.component";
import { ButtonMenu } from "./components/button.component";
import { NovoComponente } from "./components/novo.component";

@NgModule({
  declarations: [
    AppComponent,
    NewComponent,
    ButtonMenu,
    NovoComponente,
  ],
  imports: [
    BrowserModule,
    AppRoutingModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
