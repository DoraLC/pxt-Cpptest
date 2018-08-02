//%block=ccptest
declare namespace test{
  //%block=sum %x| + %y blockId="sum"
  //%shim=test::number_sum
  function number_sum(x: number, y: number): number;
}
