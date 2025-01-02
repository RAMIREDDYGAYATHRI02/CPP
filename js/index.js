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

for(let i=1;i<=10;i++){
    if(i%2!=0){
        console.log(i)
    }
    
}

let N=556;
let sum=0;
let product=1;
while(N>0){
   let digit=N%10;
   sum=sum+digit;
   product=product*digit;
   N=Math.floor(N/10);
}
console.log(sum+" "+product)



let fact=1;
let Num=6;

while(Num>0)
{
    fact=fact*Num;
    Num--;
}
console.log(fact)



