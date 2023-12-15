import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { AdminAcessComponent } from './admin-acess/admin-acess.component';
import { RouterModule } from '@angular/router';




@NgModule({
  declarations: [
    AdminAcessComponent
  ],
  imports: [
    CommonModule, 
    RouterModule.forChild([
      { path: 'admin', component: AdminAcessComponent },
    ])
  ]
})
export class AdminModule { }
