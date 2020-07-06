
const infiniteCurry = (fn, seed) => {
    const reduceValue = (args, seedValue) =>
      args.reduce((acc, a) => {
        return fn.call(fn, acc, a);
      }, seedValue);
    const next = (...args) => {
      return (...x) => {
        if (!x.length) {
          return reduceValue(args, seed);
        }
        return next(...args, reduceValue(x, seed));
      };
    };
    return next();
  };
  
  const iSum = infiniteCurry((x, y) => x + y, 0);
  const iMul = infiniteCurry((x, y) => x * y, 1);

  console.log(iSum(1)(3, 4)(5, 6)(7, 8, 9)());