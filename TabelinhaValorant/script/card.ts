export class Agent {
    name: String;
    imagem: String;
    role: string;
    roleicon:string;
    constructor(theName: string, theImagem: string, theRole: string, theRoleIcon: string) {
        this.name = theName;
        this.imagem = theImagem;
        this.role = theRole;
        this.roleicon = theRoleIcon;
      }
}