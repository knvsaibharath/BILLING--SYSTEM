 #include<stdio.h>
 #include<stdlib.h>


int main()
{
    char name[100];
    int phone_number;
    int customer_id;

    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;
    int hairremovercream;


    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int sprite;
    int coke;
    int mojitos;
    int thumbs_up;

    int Tshirts;
    int shirts;
    int cottanpants;
    int jeanspants;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;
    int clothes_total;




    printf ("-----------------------\n");
    printf ("BILLING SYSTEM\n");
    printf ("-----------------------\n");
    printf ("Customer Details\n\n");

    printf ("Customer Name : ");
    scanf("%s", &name);
    printf ("Customer Number : ");
    scanf ("%d", &phone_number);
    printf ("Customer Id : ");
    printf ("%d\n", &customer_id);

    printf("------------------------\n");

    printf("COSMETICS\n\n");

    printf("Body Soap ( RS 10 ) : ");
    scanf ("%d", &body_soap);
    printf ("Hair Cream ( RS 25 ) : ");
    scanf ("%d", &hair_cream);
    printf ("Body Spray ( RS 50 ) : ");
    scanf ("%d", &body_spray);
    printf("Hair Spray ( RS 50 ) : ");
    scanf ("%d", &hair_spray);
    printf("hairremovercream( Rs 30):");
    scanf("%d",&hairremovercream);

    printf("------------------------\n");

    printf("GROCERIES\n\n");

    printf("Sugar ( RS 100 ) : ");
    scanf("%d", &sugar);
    printf("Tea ( RS 15 ) : ");
    scanf("%d", &tea);
    printf("Coffee ( RS 50 ) : ");
    scanf("%d", &coffee);
    printf("Rice ( RS 150 ) : ");
    scanf("%d", &rice);
    printf("Wheat ( RS 160 ) : ");
    scanf("%d", &wheat);

    printf("------------------------\n");

    printf("BEVERAGES\n\n");

    printf("PEPSI ( RS 30 ) : ");
    scanf("%d", &pepsi);
    printf("SPRITE ( RS 35 ) : ");
    scanf("%d", &sprite);
    printf("COKE ( RS 30 ) : ");
    scanf("%d", &coke);
    printf("MOJITOS ( RS 25 ) : ");
    scanf("%d", &mojitos);
    printf("THUMBS UP ( RS 35 ) : ");
    scanf("%d", &thumbs_up);

    printf("------------------------\n");

    printf("CLOTHES\n\n");

    printf("TSHIRTS ( RS 300 ) : ");
    scanf("%d", &Tshirts);
    printf("SHIRTS ( RS 350 ) : ");
    scanf("%d", &shirts);
    printf("COTTANPANTS ( RS 230 ) : ");
    scanf("%d", &cottanpants);
    printf("JEANSPANTS ( RS 250 ) : ");
    scanf("%d", &jeanspants);


    printf("------------------------\n");



    int boso;
    int hc;
    int hs;
    int bosp;
    int hcr;

    boso = 10 * body_soap;
    hc = 25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 50 * body_spray;
    hcr= 30*hairremovercream;
    cosmetics_total = boso + hc + hs + bosp + hcr;

    printf("Body Soap : ");
    printf("%d RS\n", boso);
    printf("Hair Cream : ");
    printf("%d RS\n", hc);
    printf("Hair Spray : ");
    printf("%d RS\n", hs);
    printf("Body Spray : ");
    printf("%d RS\n", bosp);
    printf("hairremover cream :");
    printf("%d Rs\n",hcr);

    printf("Total Cosmetics Price : ");
    printf("%d RS\n", cosmetics_total);

    printf("------------------------\n");

    int s;
    int t;
    int c;
    int r;
    int w;

    s = 100*sugar;
    t = 15*tea;
    c = 50*coffee;
    r = 150*rice;
    w = 160*wheat;
    grocery_total = s+t+c+r+w;

    printf ("Sugar : ");
    printf ("%d RS\n", s);
    printf("Tea : ");
    printf("%d RS\n", t);
    printf ("Coffee : ");
    printf ("%d RS\n", c);
    printf("Rice : ");
    printf("%d RS\n", r);
    printf("Wheat : ");
    printf("%d RS\n", w);
    printf ("Total Grocery Price : ");
    printf("%d RS\n", grocery_total);

    printf("------------------------\n");

    int pep;
    int spr;
    int cok;
    int moj;
    int thu;

    pep = 30*pepsi;
    spr = 35*sprite;
    cok = 30*coke;
    moj = 25*mojitos;
    thu = 35*thumbs_up;
    beverage_total = pep+spr+cok+moj+thu;

    printf("Pepsi : ");
    printf("%d RS\n", pep);
    printf ("Sprite : ");
    printf("%d RS\n", spr);
    printf("Coke : ");
    printf("%d RS\n", cok);
    printf("Mojitos : ");
    printf ("%d RS\n", moj);
    printf ("Thumbs Up : ");
    printf ("%d RS\n", thu);
    printf ("Total Beverage Price : ");
    printf("%d RS\n", beverage_total);

    printf ("----------------------\n");

    int TS;
    int ST;
    int CP;
    int JP;


    TS = 300*Tshirts;
    ST = 350*shirts;
    CP = 230*cottanpants;
    JP = 250*jeanspants;

    clothes_total = TS+ST+CP+JP;

    printf("Tshits : ");
    printf("%d RS\n", TS);
    printf ("shirts : ");
    printf("%d RS\n", ST);
    printf("Cottanpants : ");
    printf("%d RS\n", CP);
    printf("jeanspants: ");
    printf("%d RS\n", JP);
    printf("Total clothes total : ");
    printf("%d RS\n", clothes_total);

    printf ("----------------------\n");


    total = cosmetics_total + grocery_total + beverage_total+clothes_total;

    printf ("Total Amount : ");
    printf("%d RS\n", total);

    printf ("---------------------------------------------------------------------------------------\n\n");

    system("color 6");
    printf("             BHARATH SuperMarket\n\n");
    printf("WELCOME Customer Name : ");
    printf("%s\n", name);
    printf("Customer Phone Number : ");
    printf("%d\n", phone_number);
    printf("Customer Id : ");
    printf("%d\n", &customer_id);

    printf("Product Name                     Quantity                      Price\n\n");
    printf("Body Soap                        %d                            %d\n", body_soap,boso);
    printf("Hair Cream                       %d                            %d\n", hair_cream,hc);
    printf("Body Spray                       %d                            %d\n", body_spray,bosp);
    printf("Hair Spray                       %d                            %d\n", hair_spray,hs);
    printf("hairremovercream                 %d                            %d\n",hairremovercream,hcr);
    printf("Sugar                            %d                            %d\n", sugar,s);
    printf("Tea                              %d                            %d\n", tea,t);
    printf("Coffee                           %d                            %d\n", coffee,c);
    printf("Rice                             %d                            %d\n", rice,r);
    printf("Wheat                            %d                            %d\n", wheat,w);
    printf("Pepsi                            %d                            %d\n", pepsi,pep);
    printf("Sprite                           %d                            %d\n", sprite,spr);
    printf("Coke                             %d                            %d\n", coke,cok);
    printf("Mojitos                          %d                            %d\n", mojitos,moj);
    printf("Thumbs Up                        %d                            %d\n\n", thumbs_up,thu);
    printf("Tshirts                          %d                            %d\n\n", Tshirts,TS);
    printf("shirts                           %d                            %d\n\n", shirts,ST);
    printf("cottanpants                      %d                            %d\n\n", cottanpants,CP);
    printf("jeans                            %d                            %d\n\n", jeanspants,JP);

    printf("Grocery Total Price : %d\n\n", grocery_total);

    printf("Cosmetic Total Price : %d\n\n", cosmetics_total);

    printf("Beverage Total Price : %d\n\n", beverage_total);

    printf("Clothing Total price:  %d\n\n",clothes_total);

    printf("Total Price : %d\n\n", total);

    printf("THANK YOU & VISIT AGAIN\n ");

    printf("----------------------------------------------------------------------------------------------\n");

   return 0;
}
