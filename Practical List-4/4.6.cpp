#include<iostream>
using namespace std;
class  DM;
class DF
{
    float feet,inch;
    public:
    void get()
    {
     cout<<"Enter Feet:";
     cin>>feet;
     cout<<"Enter Inches:";
     cin>>inch;
    }
    friend void add(DM,DF);
};
class DM
{
    float mtr,cm;
    public:
    void get()
    {
    cout<<"Enter Meter:";
    cin>>mtr;
    cout<<"Enter Centimetre:";
    cin>>cm;
    }
    friend void add(DM,DF);
};
void add(DM m,DF f)
{
  DF temp;

  m.mtr = m.mtr*3.281;
  m.cm = m.cm*0.395;

  temp.feet = m.mtr + f.feet;
  temp.inch = m.cm + f.inch;

  if(temp.inch >=12)
  {
      temp.feet += temp.inch/12.0;
      temp.inch = (int)temp.inch%12;
  }

  cout<<"After Addition : ";
  cout<<temp.feet<<"'"<<temp.inch<<"\""<<endl;
}
int main()
{
   DM mm;
   DF ff;
   cout<<"Enter values for DM Object"<<endl;
   mm.get();

   cout<<"Enter values for Df Object"<<endl;
   ff.get();

   add(mm,ff);
}
