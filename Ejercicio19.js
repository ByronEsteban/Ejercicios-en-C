function main(dinero){
  console.log(`dinero: ${dinero}`);
  console.log(`1000: ${Math.trunc(dinero/1000)}`);
  dinero = dinero%1000;
  console.log(`500: ${Math.trunc(dinero/500)}`);
  dinero = dinero%500;
  console.log(`200: ${Math.trunc(dinero/200)}`);
  dinero = dinero%200;
  console.log(`100: ${Math.trunc(dinero/100)}`);
  dinero = dinero%100;
  console.log(`50: ${Math.trunc(dinero/50)}`);
  dinero = dinero%50;
  console.log(`20: ${Math.trunc(dinero/20)}`);
  dinero = dinero%20;
  console.log(`10: ${Math.trunc(dinero/10)}`);
  return 0;
}

main(1230)
