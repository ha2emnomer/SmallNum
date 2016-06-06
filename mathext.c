long Power(long x , long y)
{
long res =x; y--;
while (y >0)
{
res = res * x;
y--;
}
return res;
}
int numDigits(long num){
if(num<0)
{
num=num*-1;
}
if(num==0)
{
return 0 ;
}
if (num <10)
{
return 1;
}
else if(num>=10 && num<100){
return 2;
}
else if(num>=100 && num <1000)
{
return 3;
}
else if(num>=1000 && num <10000)
{
return 4;
}
else if(num>=10000 && num <100000)
{
return 5;
}
else if(num>=100000 && num <1000000)
{
return 6;
}
else if(num>=1000000 && num <10000000)
{
return 7;
}
else if(num>=10000000 && num <10000000)
{
return 8;
}
else if(num>=100000000 && num <1000000000)
{
return 9;
}
else
{
return 10;
}
}
