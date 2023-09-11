import { Component, Input } from "@angular/core";
@Component({
    selector: 'button-menu',
    templateUrl:'./button.component.html',
    styleUrls: ['./button.component.css'],
})

export class ButtonMenu{
    @Input() label: string = '';
    buttonText: string = 'Click1';
}