for(let i=1;i<=5;i++){
    console.log(`${i} - ${i*i}`)
}

let people={
    name:"boby",
    age:"21",
    wt:"120",
    h:"6"
}
console.log(people)
for (let key in people) {
    console.log([key]+":"+people[key]);
}



