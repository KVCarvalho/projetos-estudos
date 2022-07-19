type jobs = "Padeiro" | "Atriz"

interface pessoa {
    nome: string,
    idade: number,
    profissao: string & jobs
}

const MARIA: pessoa = {
    nome: "Maria",
    idade: 29,
    profissao: "Atriz"
}
const ROBERTO: pessoa = {
    nome: "Roberto",
    idade: 19,
    profissao: "Padeiro"
}
const LAURA: pessoa = {
    nome: "Laura",
    idade: 32,
    profissao: "Atriz"
}
const CARLOS: pessoa = {
    nome: "Carlos",
    idade: 19,
    profissao: "Padeiro"
}