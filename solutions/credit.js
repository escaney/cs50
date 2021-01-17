const creditCard = [4, 0, 0, 3, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4];

creditCard.reverse();

const filtered = creditCard
  .filter((num, i) => {
    if (i % 2 != 0) {
      return num;
    }
  })
  .map(num => {
    num = num * 2
    return ("" + num).split("");
  })
  .reduce((a, b) => [...a, ...b])
  .map(Number)
  .reduce((a, b) => a + b);


const remainders = creditCard
  .filter((elem, i) => {
    if (i % 2 === 0) {
      return elem;
    }
  })
  .reduce((a, b) => a + b);

const total = filtered + remainders;

if (total % 2 === 0) {
  console.log('Card is valid, thank you');
} else {
  console.log('Sorry, your card is invalid');
}
