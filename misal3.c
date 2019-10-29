#include<stdio.h>
void main()
{
	int eded1, eded2, eded3, eded4, eded5;
	scanf("%d %d %d %d %d", &eded1, &eded2, &eded3, &eded4, &eded5);
	int musbetEdedlerinSayi = 0;
	int musbetEdedlerinCemi = 0;
	int menfiEdedlerinSayi = 0;
	int cem =0;
	float edediOrta =0.0;
	
	//1-ci eded
	if(eded1>0)
	{
		musbetEdedlerinSayi = musbetEdedlerinSayi+1;
		musbetEdedlerinCemi = musbetEdedlerinCemi+eded1;
	}
	else if(eded1<0)
	{
		menfiEdedlerinSayi = menfiEdedlerinSayi+1;
	}
	if(eded1>100 && eded1<200)
	{
		cem = cem + eded1;
	}
	
	//2.ci eded
	if(eded2>0)
	{
		musbetEdedlerinSayi = musbetEdedlerinSayi+1;
		musbetEdedlerinCemi = musbetEdedlerinCemi + eded2;
	}
	else if(eded2<0)
	{
		menfiEdedlerinSayi = menfiEdedlerinSayi+1;
	}
	if(eded2>100 && eded2<200)
	{
		cem = cem + eded2;
	}
	
	//3.cu eded
	if(eded3>0)
	{
		musbetEdedlerinSayi = musbetEdedlerinSayi+1;
		musbetEdedlerinCemi = musbetEdedlerinCemi + eded3;
	}
	else if(eded3<0)
	{
		menfiEdedlerinSayi = menfiEdedlerinSayi+1;
	}
	if(eded3>100 && eded3<200)
	{
		cem = cem + eded3;
	}
	//4.cu eded
	if(eded4>0)
	{
		musbetEdedlerinSayi = musbetEdedlerinSayi+1;
		musbetEdedlerinCemi = musbetEdedlerinCemi + eded4;
	}
	else if(eded4<0)
	{
		menfiEdedlerinSayi = menfiEdedlerinSayi+1;
	}
	if(eded4>100 && eded4<200)
	{
		cem = cem + eded4;
	}
	
	//5.ci eded
	if(eded5>0)
	{
		musbetEdedlerinSayi = musbetEdedlerinSayi+1;
		musbetEdedlerinCemi = musbetEdedlerinCemi + eded5;
	}
	else if(eded5<0)
	{
		menfiEdedlerinSayi = menfiEdedlerinSayi+1;
	}
	if(eded5>100 && eded5<200)
	{
		cem = cem + eded5;
	}
	
	edediOrta = (float)musbetEdedlerinCemi/(float)musbetEdedlerinSayi;
	printf("Musbet ededlerin ededi ortasi = %f\n", edediOrta);
	printf("Menfi ededlerin sayi: %d\n", menfiEdedlerinSayi);
	printf("100-200 arasindaki ededlerin cemi: %d", cem);

}
