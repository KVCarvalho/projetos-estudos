import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { SideBarComponent } from './side-bar/side-bar.component';
import { MainAreaComponent } from './main-area/main-area.component';
import { SiteHeaderComponent } from './site-header/site-header.component';
import { MainCardComponent } from './main-card/main-card.component';

@NgModule({
  declarations: [
    AppComponent,
    SideBarComponent,
    MainAreaComponent,
    SiteHeaderComponent,
    MainCardComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
