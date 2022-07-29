#include<iostream>>
using namespace std;
int main()
{
    int quant;
    int ch;
    //Quantity of the products we have
    int Q_rooms, Q_pasta=0, Q_shake=0, Q_chicken=0, Q_pizza=0, Q_noodles=0, Q_dessert=0, Q_burger;
    //Quantity of the products we have sold
    int S_rooms=0, S_pasta=0, S_shake=0, S_chicken=0, S_pizza=0, S_noodles=0, S_dessert=0, S_burger;
    //Total Price of the products
    int Total_rooms=0, Total_pasta=0, Total_shake=0, Total_chicken=0, Total_pizza=0, Total_noodles=0, Total_dessert=0;
    int Total_burger;

    cout<<"\n\tQuantity of Items we have";
    cout<<"\n\t-------------------------";
    cout<"\nRooms Available in the Hotel";
    cin>>Q_rooms;
    cout<<"\nQuantity of the Pasta: ";
    cin>>Q_pasta;
    cout<<"\nQuantity of the Shake: ";
    cin>>Q_shake;
    cout<<"\nQuantity of the Burger: ";
    cin>>Q_burger;
    cout<<"\nQuantity of the Chicken Roll: ";
    cin>>Q_chicken;
    cout<<"\nQuantity of the Pizza: ";
    cin>>Q_pizza;
    cout<<"\nQuantity of the Noodles: ";
    cin>>Q_noodles; 
    cout<<"\nQuantity of the Dessert: ";
    cin>>Q_dessert;

	m:
    //MENU OPTION
    cout<<"\n\t\tPlease select from the given Menu";
    cout<<"\n\t\t---------------------------------";
    cout<<"\n 1: Rooms";
    cout<<"\n 2: Pasta";
    cout<<"\n 3: Shake";
    cout<<"\n 4: Burger";
    cout<<"\n 5: Chicken Roll";
    cout<<"\n 6: Pizza";
    cout<<"\n 7: Noodles";
    cout<<"\n 8: Dessert";
    cout<<"\n 9: Info Regarding the sales and collection";
    cout<<"\n 10: Exit";

    cout<<"\n\nPlease Enter your choice: ";
    cin>>ch;
    switch(ch)
    {
    	case 1:
    		//The case for rooms
    		cout<<"Enter the number of rooms you want: ";
    		cin>>quant;
    		if(Q_rooms-S_rooms>=quant)
    		{
    			S_rooms=S_rooms+quant;
    			Total_rooms=Total_rooms + quant*1200;
    			cout<<"\n\n\t\t"<<quant<<" room/rooms have been allocated to you in the hotel.";
			}
			else
			{
				cout<<"\n\t Only"<<Q_rooms-S_rooms<<" rooms are remaining in the hotel";
			}
		break;
		
		case 2:
    		//The case for pasta
    		cout<<"Enter the Pasta quantity you want: ";
    		cin>>quant;
    		if(Q_pasta-S_pasta>=quant)
    		{
    			S_pasta=S_pasta+quant;
    			Total_pasta=Total_pasta + quant*250;
    			cout<<"\n\n\t\t"<<quant<<" Pasta is the order.";
			}
			else
			{
				cout<<"\n\t Only"<<Q_pasta-S_pasta<<" Pasta remaining in the hotel";
			}
		break;
		
		case 3:
    		//The case for shake
    		cout<<"Enter the quantity of the Shakes available: ";
    		cin>>quant;
    		if(Q_shake-S_shake>=quant)
    		{
    			S_shake=S_shake+quant;
    			Total_pasta=Total_pasta + quant*80;
    			cout<<"\n\n\t\t"<<quant<<" Shakes is the order.";
			}
			else
			{
				cout<<"\n\t Only"<<Q_shake-S_shake<<" Shakes remaining in the hotel";
			}
		break;
		
		case 4:
    		//The case for Burger
    		cout<<"Enter the quantity of the Burgers available: ";
    		cin>>quant;
    		if(Q_burger-S_burger>=quant)
    		{
    			S_burger=S_burger + quant;
    			Total_burger =Total_burger + quant*120;
    			cout<<"\n\n\t\t"<<quant<<" Burger is the order.";
			}
			else
			{
				cout<<"\n\t Only"<<Q_burger-S_burger<<" Burgers remaining in the hotel";
			}
		break;
		
		case 5:
    		//The case for chicken roll
    		cout<<"Enter the quantity of the Chicken Rolls available: ";
    		cin>>quant;
    		if(Q_chicken-S_chicken>=quant)
    		{
    			S_chicken=S_chicken+quant;
    			Total_chicken=Total_chicken + quant*140;
    			cout<<"\n\n\t\t"<<quant<<" Chicken rolls is the order.";
			}
			else
			{
				cout<<"\n\t Only"<<Q_chicken-S_chicken<<" Chicken Rolls remaining in the hotel";
			}
		break;
		
		case 6:
    		//The case for Pizza
    		cout<<"Enter the quantity of the Pizza available: ";
    		cin>>quant;
    		if(Q_pizza-S_pizza>=quant)
    		{
    			S_pizza=S_pizza+quant;
    			Total_pizza=Total_pizza + quant*220;
    			cout<<"\n\n\t\t"<<quant<<" Pizza is the order.";
			}
			else
			{
				cout<<"\n\t Only"<<Q_pizza-S_pizza<<" Pizza remaining in the hotel";
			}
		break;
		
		case 7:
    		//The case for Noodles
    		cout<<"Enter the quantity of the Noodles available: ";
    		cin>>quant;
    		if(Q_noodles-S_noodles>=quant)
    		{
    			S_noodles=S_noodles+quant;
    			Total_noodles=Total_noodles + quant*140;
    			cout<<"\n\n\t\t"<<quant<<" Noodles is the order.";
			}
			else
			{
				cout<<"\n\t Only"<<Q_noodles-S_noodles<<" Noodles remaining in the hotel";
			}
		break;
		
		case 8:
    		//The case for Dessert
    		cout<<"Enter the quantity of the Dessert available: ";
    		cin>>quant;
    		if(Q_dessert-S_dessert>=quant)
    		{
    			S_dessert=S_dessert + quant;
    			Total_dessert =Total_dessert + quant*150;
    			cout<<"\n\n\t\t"<<quant<" Dessert is the order.";
			}
			else
			{
				cout<<"\n\t Only"<<Q_dessert-S_dessert<<" Dessert remaining in the hotel";
			}
		break;
		
		case 9:
			//Details regarding the sales and collection
			//Roooms
			cout<<"\n\t\tDetails of Sales and Collections";
			cout<<"\n\nTotal number of Rooms we had: "<<Q_rooms;
			cout<<"\n\nNumber of Rooms that have been allocated to people: "<<S_rooms;
			cout<<"\n\nRemaining rooms unsold: "<<Q_rooms- S_rooms;
			cout<<"\n\nTotal rooms collection for the day: "<<Total_rooms;
			
			//Pasta
			cout<<"\n\nTotal number of Pasta we had: "<<Q_pasta;
			cout<<"\n\nNumber of Pasta sold to people: "<<S_pasta;
			cout<<"\n\nRemaining Pasta unsold: "<<Q_pasta- S_pasta;
			cout<<"\n\nTotal Pasta collection for the day: "<<Total_pasta;
			
			//Shake
			cout<<"\n\nTotal number of Shakes we had: "<<Q_shake;
			cout<<"\n\nNumber of Shakes sold to people: "<<S_shake;
			cout<<"\n\nRemaining Shakes unsold: "<<Q_shake- S_shake;
			cout<<"\n\nTotal Shakes collection for the day: "<<Total_shake;
			
			//Burger
			cout<<"\n\nTotal number of Burgers we had: "<<Q_burger;
			cout<<"\n\nNumber of Burgers sold to people: "<<S_burger;
			cout<<"\n\nRemaining Burgers unsold: "<<Q_burger- S_burger;
			cout<<"\n\nTotal Burger collection for the day: "<<Total_burger;
			
			//Chicken Roll
			cout<<"\n\nTotal number of Chicken Roll we had: "<<Q_chicken;
			cout<<"\n\nNumber of Chicken Rolls sold to people: "<<S_chicken;
			cout<<"\n\nRemaining Chicken Rolls unsold: "<<Q_chicken- S_chicken;
			cout<<"\n\nTotal Chicken Roll collection for the day: "<<Total_chicken;
			
			//Pizza
			cout<<"\n\nTotal number of Pizza we had: "<<Q_pizza;
			cout<<"\n\nNumber of Pizza sold to people: "<<S_pizza;
			cout<<"\n\nRemaining Pizza unsold: "<<Q_pizza- S_pizza;
			cout<<"\n\nTotal Pizza collection for the day: "<<Total_pizza;
			
			//Noodles
			cout<<"\n\nTotal number of Noodles we had: "<<Q_noodles;
			cout<<"\n\nNumber of Noodles sold to people: "<<S_noodles;
			cout<<"\n\nRemaining Noodles unsold: "<<Q_noodles- S_noodles;
			cout<<"\n\nTotal Noodles collection for the day: "<<Total_noodles;
			
			//Dessert
			cout<<"\n\nTotal number of Dessert we had: "<<Q_noodles;
			cout<<"\n\nNumber of Dessert sold to people: "<<S_noodles;
			cout<<"\n\nRemaining Dessert unsold: "<<Q_dessert- S_dessert;
			cout<<"\n\nTotal Dessert collection for the day: "<<Total_dessert;
			cout<<"Total collection for the Day is: "<<Total_rooms+ Total_pasta+Total_shake+Total_chicken+Total_pizza+Total_noodles+Total_dessert+Total_burger;
		break;
			
		case 10:
			exit(0);
			default:
				cout<<"\nPlease select the numbers mentioned above";
	}
	goto m;
}
