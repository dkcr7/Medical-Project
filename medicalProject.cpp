
#include<iostream>
using namespace std;
class introduction
{
 long long int number;
 char name[100];
 string add,mail,nationality;
 float height,weight;
public:
 introduction()
 {
 cout<<"Name: ";
 cin>>name;
 cout<<"Nationality: ";
 cin>>nationality;
 cout<<"Contact number: ";
 cin>>number;
 cout<<"Address: ";
 cin>>add;
 cout<<"Height: ";
 cin>>height;
 cout<<"Weight: ";
 cin>>weight;
 cout<<"Email: ";
 cin>>mail;
 }
 void result()
 {
 cout<<"Thanks "<<name<<" for using our services."<<endl<<endl<<"<--/*_*\ /*_*\ /*_*\ /*_*\\-->"<<endl<<endl<<"********** VISIT AGAIN **********";
 }
};
class disease_details
{
 int i;
public:
 void details()
 {
 cout<<"1 for heart related:"<<endl;
 cout<<"2 for autoimmune related:"<<endl;
 cout<<"3 for PCOS:"<<endl;
 cout<<"4 for osteoporosis:"<<endl;
 cout<<"5 for strokes related:"<<endl;
 cout<<"Enter your choice: ";
 cin>>i;
 do
 {
 switch(i)
 {
 case 1:
 heart();
 case 2:
 autoimmune();
 case 3:
 PCOS();
 case 4:
 osteoporosis();
 case 5:
 stroke();
 }
 cout<<"Enter choice or 999 to exit: ";
 cin>>i;
 }
 while(i!=999);
 }
 void heart()
 {
 cout<<"details of 1"<<endl;
 }
 void autoimmune()
 {
 cout<<"details of 2"<<endl;
 }
 void PCOS()
 {
 cout<<"PCOS affects a woman;s ovaries, the reproductive organs that produce estrogen and progesterone."<<endl<<
 "It affects women hormone (that regulate mensural cycle) levels."<<endl<<
 "*Symptoms:"<<endl<<
 "~main Irregular periods: Some women with PCOS get fewer than eight periods a year."<<endl<<
 "~Heavy bleeding: The periods you do get can be heavier than normal."<<endl<<
 "~Hair growth: More than 70 percent of women with this condition grow hair on their face and body including on their back, belly, and chest.Excess hair growth is called HIRSUTISM."<<endl<<
 "~Acne: Male hormones can make the skin oilier than usual and cause breakouts on areas like the face, chest, and upper back."<<endl<<
 "~Weight gain: Up to 80 percent of women with PCOS are overweight or obese."<<endl<<
 "~Male-pattern baldness: Hair on the scalp get thinner and fall out."<<endl<<
 "~Darkening of the skin: Dark patches of skin can form in body creases like those on the neck, in the groin and under the breasts."<<endl<<
 "~Headaches: Hormone changes can trigger headaches in some women."<<endl<<
 "~main cysts in ovaries: bloating, swelling, or pain in the lower abdomen."<<endl<<
 "~main high androgen level: high sugar level leads ovaries to produce male hormones."<<endl;
 }
 void osteoporosis()
 {
 cout<<"weakens bone and increases risk of bones breaking."<<endl<<
 "causes:"<<endl<<
 "o	Excessive alcohol consumption."<<endl<<
 "o	Lack of exercise."<<endl<<
 "o	Diet low in calcium."<<endl<<
 "o	Poor nutrition and poor general health."<<endl<<
 "o	Personal history of fracture as an adult."<<endl<<
 "o	Cigarette smoking."<<endl<<
 "*when to call doctor:"<<endl<<
 "~bone desity: All women aged 65 and older"<<endl;
 }
 void stroke()
 {
 cout<<"TIA-mini-attack"<<endl<<
 "*symptoms:"<<endl<<
 "Sudden numbness or weakness of the face, arm or leg, especially on one side of the body."<<endl<<
 "Sudden confusion, trouble speaking or understanding."<<endl<<
 "Sudden trouble seeing or blurred vision in one or both eyes."<<endl<<
 "Sudden trouble walking, dizziness, loss of balance or coordination."<<endl<<
 "Sudden severe headache with no known cause."<<endl;
 }
};
class prevention
{
public:
 void hearts_prevention()
 {
 cout<<"<-----PREVENTIONS----->"<<endl;
 cout<<"-->Stop smoking."<<endl
 <<"-->Engage in physical activity."<<endl
 <<"-->take proper diet."<<endl
 <<"-->Control blood pressure."<<endl
 <<"-->Undergo cholesterol therapy."<<endl
 <<"-->Control blood sugar."<<endl
 <<"-->Limit alcohol intake."<<endl;
 }
 void autoimmune_prevention()
 {
 cout<<"<-----PREVENTIONS----->"<<endl;
 cout<<"-->Intake of anti-inflammatory foods like omega-3 wild fish, leafy greens or turmeric, and avoid inflammatory foods, such as sugar and corn oils."<<endl
 <<"-->Get checked for heavy metal toxicity."<<endl
 <<"-->supplements: nutrients like fish oil, vitamin C, vitamin D, and pro-biotic."<<endl
 <<"-->exercise daily."<<endl
 <<"-->Take 8 hour sleep every night."<<endl;
 }
 void PCOS_prevention()
 {
 cout<<"<-----PREVENTIONS----->"<<endl;
 cout<<"-->reducing weight."<<endl
 <<"-->having proper diet."<<endl
 <<"-->maintain vaginal hygiene."<<endl
 <<"-->keep yourself in happy environment."<<endl;
 }
 void osteoporosis_prevention()
 {
 cout<<"<-----PREVENTIONS----->"<<endl;
 cout<<"-->stop drinking carbonated and caffienated drinks."<<endl
 <<"-->less intake of protein."<<endl
 <<"-->exercise."<<endl
 <<"-->keep your stomach acid free."<<endl
 <<"-->beans,vegetables, and good fats (nuts, olives, olive oil, fish, fish oils, avocados)."<<endl
 <<"-->Take calcium supplements."<<endl
 <<"-->exposure to sunlight."<<endl;
 }
 void stroke_prevention()
 {
 cout<<"<-----PREVENTIONS----->"<<endl;
 cout<<"-->Stop smoking."<<endl
 <<"-->Losing weight."<<endl
 <<"-->Eating a balanced diet low in sodium and saturated and trans-fat."<<endl
 <<"-->limit alcohol intake."<<endl
 <<"-->Exercising regularly in order to stay physically fit."<<endl
 <<"-->Maintaining good control of existing medical conditions such as diabetes, high blood pressure and high cholesterol."<<endl;
 }
};
class treatment
{
public:
 void hearts_treatment()
 {
 cout<<"<-----TREATMENTS----->"<<endl;
 cout<<"-->operation."<<endl
 <<"-->medicine treatment."<<endl;
 }
 void autoimmune_treatment()
 {
 cout<<"<-----TREATMENTS----->"<<endl;
 cout<<"-->medications that bring down inflammation and calm the over-active immune response."<<endl;
 }
 void PCOS_treatment()
 {
 cout<<"<-----TREATMENTS----->"<<endl;
 cout<<"-->Surgical treatment."<<endl
 <<"-->exercise."<<endl
 <<"-->proper diet."<<endl;
 }
 void osteoporosis_treatment()
 {
 cout<<"<-----TREATMENTS----->"<<endl;
 cout<<"-->Calcium supplements."<<endl
 <<"-->Vitamin D."<<endl
 <<"-->exercise."<<endl;
 }
 void stroke_treatment()
 {
 cout<<"<-----TREATMENTS----->"<<endl;
 cout<<"-->Initially you go for surgery like remove blockage,clots."<<endl
 <<"Then after surgery:"<<endl
 <<"-->Physiotherapy - to improve mobility."<<endl
 <<"-->Speech therapy - to improve communication."<<endl
 <<"-->Occupational therapy - to improve daily functions such as eating, cooking, toileting and washing."<<endl;
 }
};
class hearts:public prevention,public treatment
{
 int x=0,q=0,r,ans;
public:
 void hearts_quest()
 {
 cout<<"^^^^^^^^^^FOR HEART^^^^^^^^^^"<<endl;
 cout<<"Do you feel neck,jaw,shoulder,upper back or abdominal discomfort: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you get sudden shortness of breath: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel pain in one or both arms: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you suffer from Nausea or vomiting: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you sweat in cold or in moderate temperature places: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel sudden dizziness: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel unusual fatigue: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 r=(x*100)/q;
 if(r>65)
 {
 cout<<"You have "<<r<<"% chance to have hearts disease."<<endl;
 hearts_treatment();
 }
 else
 {
 cout<<"You have "<<r<<"% chance to have hearts disease."<<endl;
 hearts_prevention();
 }
 }
};
class autoimmune:public prevention,public treatment
{
 int x=0,q=0,r,ans;
public:
 void autoimmune_quest()
 {
 cout<<"^^^^^^^^^^FOR AUTOIMMUNE^^^^^^^^^^"<<endl;
 cout<<"Do you get fatigue: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel ache in your muscle: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you get fever: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you get trouble concentrating: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel numbness and tingling in hands and feet: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel hair loss: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you get rashes on skin: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you regular pain in stomach: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 r=(x*100)/q;
 if(r>55)
 {
 cout<<"You have "<<r<<"% chance to have autoimmune disease."<<endl;
 autoimmune_treatment();
 }
 else
 {
 cout<<"You have "<<r<<"% chance to have autoimmune disease."<<endl;
 autoimmune_prevention();
 }
 }
};
class PCOS:public prevention,public treatment
{
 int x=0,q=0,r,ans;
public:
 void PCOS_quest()
 {
 cout<<"^^^^^^^^^^FOR PCOS^^^^^^^^^^"<<endl;
 cout<<"Do you get irregular periods, like less than 8 in a year: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you get heavy bleeding than normal during periods: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you see any hair growth on stomach,back,belly or chick: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Are you obese or have you felt any weight gain in recent time: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel excess hair fall in recent times: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you see any dark patches on the neck, in the groin and under the breast: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel severe headache: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel bloating,swelling or pain in the lower abdomen: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 r=(x*100)/q;
 if(r>60)
 {
 cout<<"You have "<<r<<"% chance to have PCOS disease."<<endl;
 PCOS_treatment();
 }
 else
 {
 cout<<"You have "<<r<<"% chance to have PCOS disease."<<endl;
 PCOS_prevention();
 }
 }
};
class osteoporosis:public prevention,public treatment
{
 int x=0,q=0,r,ans;
public:
 void osteoporosis_quest()
 {
 cout<<"^^^^^^^^^^FOR OSTEOPOROSIS^^^^^^^^^^"<<endl;
 cout<<"Do you feel weakness in joints: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you consume excess alcohol and cigarette: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you exercise regularly: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"DO you take proper diet: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you have any personal fracture history as an adult: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 r=(x*100)/q;
 if(r>60)
 {
 cout<<"You have "<<r<<"% chance to have osteoporosis disease."<<endl;
 osteoporosis_treatment();
 }
 else
 {
 cout<<"You have "<<r<<"% chance to have osteoporosis disease."<<endl;
 osteoporosis_prevention();
 }
 }
};
class stroke:public prevention,public treatment
{
 int x=0,q=0,r,ans;
public:
 void stroke_quest()
 {
 cout<<"^^^^^^^^^^FOR STROKE^^^^^^^^^^"<<endl;
 cout<<"do you feel any numbness or weakness on the face,arms or legs,especially on one side of the body: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel sudden confusion,trouble speaking or understanding: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel sudden trouble seeing or blurred vision in one or both eyes: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel sudden trouble in walking,dizziness,loss of balance or coordination: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 cout<<"Do you feel sudden severe headache with no known cause: ";
 cin>>ans;
 if(ans)
 {
 x++;
 }
 q++;
 r=(x*100)/q;
 if(r>65)
 {
 cout<<"You have "<<r<<"% chance to have stroke disease."<<endl;
 stroke_treatment();
 }
 else
 {
 cout<<"You have "<<r<<"% chance to have stroke disease."<<endl;
 stroke_prevention();
 }
 }
};
class select_parts:public hearts,public autoimmune,public PCOS,public osteoporosis,public stroke
{
 int i,i1,i2,i3,i4,i5,i6;
public:
 void list1()
 {
 cout<<"<-----COMMON DISEASES IN THIS AGE GROUP ARE----->"<<endl;
	cout<<"1.HEART"<<endl;
	cout<<"2.STROKE"<<endl;
	cout<<"HOW MANY DISEASE YOU WANT TO SELECT: ";
	cin>>i;
	try
	{
	if(i==1||i==2)
 {
 if(i==1)
 {
 cout<<"SELECT DISEASE ACCORDING TO NO:";
 cin>>i1;
 cout<<"<-------Enter 1 for YES,0 for NO------->"<<endl;
 if(i1==1)
 hearts_quest();
 else
 stroke_quest();
 }
 else
 {
 cout<<"<-------Enter 1 for YES,0 for NO------->"<<endl;
 hearts_quest();
 stroke_quest();
 }
 }
 throw "You have enter an invalid number.";
	}
	catch(const char* mssg)
	{
	cerr<<mssg<<endl;
	}
 }
 void list2()
 {
 cout<<"<-----COMMON DISEASES IN THIS AGE GROUP ARE----->"<<endl;
	cout<<"1.HEART"<<endl;
	cout<<"2.PCOS"<<endl;
	cout<<"HOW MANY DISEASE YOU WANT TO SELECT: ";
	cin>>i;
	try
	{
	if(i==1||i==2)
 {
 if(i==1)
 {
 cout<<"SELECT DISEASE ACCORDING TO NO:";
 cin>>i1;
 cout<<"<-------Enter 1 for YES,0 for NO------->"<<endl;
 if(i1==1)
 hearts_quest();
 else
 PCOS_quest();
 }
 else
 {
 cout<<"<-------Enter 1 for YES,0 for NO------->"<<endl;
 hearts_quest();
 PCOS_quest();
 }
 }
 throw "You have enter an invalid number.";
	}
	catch(const char* mssg)
	{
	cerr<<mssg<<endl;
	}
 }
 void list3()
	{
	cout<<"<-----COMMON DISEASES IN THIS AGE GROUP ARE----->"<<endl;
	cout<<"1.HEART"<<endl;
	cout<<"2.AUTOIMMUNE"<<endl;
	cout<<"3.PCOS"<<endl;
	cout<<"HOW MANY DISEASE YOU WANT TO SELECT: ";
	cin>>i;
	try
	{
	if(i==1||i==2||i==3)
 {
 if(i==1)
 {
 cout<<"SELECT DISEASE ACCORDING TO NO:";
 cin>>i1;
 cout<<"<-------Enter 1 for YES,0 for NO------->"<<endl;
 if(i1==1)
 {
 hearts_quest();
 }
 if(i1==2)
 {
 autoimmune_quest();
 }
 if(i1==3)
 {
 PCOS_quest();
 }
 }
 else if(i==2)
 {
 cout<<"SELECT DISEASE ACCORDING TO NO:";
 cin>>i2>>i3;
 cout<<"<-------Enter 1 for YES,0 for NO------->"<<endl;
 if(i2==1&&i3==2||i2==2&&i3==1)
 {
 hearts_quest();
 autoimmune_quest();
 }
 if(i2==1&&i3==3||i2==3&&i3==1)
 {
 hearts_quest();
 PCOS_quest();
 }
 if(i2==2&&i3==3||i2==3&&i3==2)
 {
 autoimmune_quest();
 PCOS_quest();
 }
 }
 else if(i==3)
 {
 hearts_quest();
 autoimmune_quest();
 PCOS_quest();
 }
 }
 throw "You have enter an invalid number.";
	}
 catch(const char* mssg)
	{
	cerr<<mssg<<endl;
	}
	}
 void list4()
	{
	cout<<"<-----COMMON DISEASES IN THIS AGE GROUP ARE----->"<<endl;
	cout<<"1.HEART"<<endl;
	cout<<"2.AUTOIMMUNE"<<endl;
	cout<<"3.OSTEOPOROSIS"<<endl;
	cout<<"HOW MANY DISEASE YOU WANT TO SELECT: ";
	cin>>i;
	try
	{
	if(i==1||i==2||i==3)
 {
 if(i==1)
 {
 cout<<"SELECT DISEASE ACCORDING TO NO:";
 cin>>i1;
 cout<<"<-------Enter 1 for YES,0 for NO------->"<<endl;
 if(i1==1)
 {
 hearts_quest();
 }
 if(i1==2)
 {
 autoimmune_quest();
 }
 if(i1==3)
 {
 osteoporosis_quest();
 }
 }
 else if(i==2)
 {
 cout<<"SELECT DISEASE ACCORDING TO NO:";
 cin>>i2>>i3;
 cout<<"<-------Enter 1 for YES,0 for NO------->"<<endl;
 if(i2==1&&i3==2||i2==2&&i3==1)
 {
 hearts_quest();
 autoimmune_quest();
 }
 if(i2==1&&i3==3||i2==3&&i3==1)
 {
 hearts_quest();
 osteoporosis_quest();
 }
 if(i2==2&&i3==3||i2==3&&i3==2)
 {
 autoimmune_quest();
 osteoporosis_quest();
 }
 }
 else if(i==3)
 {
 hearts_quest();
 autoimmune_quest();
 osteoporosis_quest();
 }
 }
 throw "You have enter an invalid number.";
	}
 catch(const char* mssg)
	{
	cerr<<mssg<<endl;
	}
	}
 void list5()
	{
 cout<<"<-----COMMON DISEASES IN THIS AGE GROUP ARE----->"<<endl;
	cout<<"1.HEART"<<endl;
	cout<<"2.OSTEOPOROSIS"<<endl;
	cout<<"HOW MANY DISEASE YOU WANT TO SELECT: ";
	cin>>i;
	try
	{
	if(i==1||i==2)
 {
 if(i==1)
 {
 cout<<"SELECT DISEASE ACCORDING TO NO:";
 cin>>i1;
 cout<<"<-------Enter 1 for YES,0 for NO------->"<<endl;
 if(i1==1)
 hearts_quest();
 else
 osteoporosis_quest();
 }
 else
 {
 cout<<"<-------Enter 1 for YES,0 for NO------->"<<endl;
 hearts_quest();
 osteoporosis_quest();
 }
 }
 throw "You have enter an invalid number.";
	}
 catch(const char* mssg)
	{
	cerr<<mssg<<endl;
	}
	}
};
class checkup:public select_parts
{
 int i;
public:
 void body_selection1()
 {
 list1();
 }
 void body_selection2()
 {
 list2();
 }
 void body_selection3()
 {
 list3();
 }
 void body_selection4()
 {
 list4();
 }
 void body_selection5()
 {
 list5();
 }
};
int main()
{
 int option,age_select;
 cout<<"Welcome to your MEDICAL EXAMINER"<<endl;
 introduction intro;
 cout<<"ENTER 1 FOR DISEASE INFORMATION AND 2 FOR ROUTINE CHECKUP: ";
 cin>>option;
 disease_details dt;
 checkup c1;
 if(option==1)
 dt.details();
 else
 {
 cout<<"<---Select age group--->"<<endl;
 cout<<"1: 1-15"<<endl<<"2: 16-30"<<endl<<"3: 31-45"<<endl<<"4: 46-60"<<endl<<"5: 60 or above"<<endl;
 cin>>age_select;
 switch(age_select)
 {
 case 1:
 {
 c1.body_selection1();//questions based on this age group;
 break;
 }
 case 2:
 {
 c1.body_selection2();//questions based on this age group:
 break;
 }
 case 3:
 {
 c1.body_selection3();//questions based on this age group:
 break;
 }
 case 4:
 {
 c1.body_selection4();//questions based on this age group:
 break;
 }
 case 5:
 {
 c1.body_selection5();//questions based on this age group:
 break;
 }
 }
 }
 intro.result();
 return 0;
}
