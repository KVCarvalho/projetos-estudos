import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { StartScreenComponent } from './start-screen/start-screen.component';
import { ConfigurationScreenComponent } from './configuration-screen/configuration-screen.component';
import { ResultScreenComponent } from './result/result-screen/result-screen.component';

const routes: Routes = [
  { path: '', component: StartScreenComponent },
  { path: 'configuration', component: ConfigurationScreenComponent},
  { path: 'result', component: ResultScreenComponent }
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
