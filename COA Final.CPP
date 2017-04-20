#include<iostream.h>
#include<graphics.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>


void cache_working()
{
	int k, address_size, no_of_sets, tag, set, word;
	long int cache_size, cache_size_in_kilo_bytes, cache_size_in_mega_bytes, line_size, line_size_in_kilo_bytes, line_size_in_mega_bytes, main_memory_size, main_memory_size_in_kilo_bytes, main_memory_size_in_mega_bytes,no_of_blocks, no_of_lines_in_cache;

	int choice1=0,choice2=0,choice3=0,choice4=0;

	cout<<"\n\nEnter the number of lines in a set (i.e. the value of k) =\t";
	cin>>k;

	cout<<"\n\nDo you know the size of cache in bytes?(1/0) =\t";
	cin>>choice3;

	if(choice3)
	{
		cout<<"\n\nEnter cache size (in bytes) =\t";
		cin>>cache_size;
	}

	else
	{
		cout<<"\n\nDo you know the size of cache in kilobytes?(1/0) =\t";
		cin>>choice4;	

		if(choice4)
		{
			cout<<"\n\nEnter cache size (in kilo bytes) =\t";
			cin>>cache_size_in_kilo_bytes;
			cache_size=cache_size_in_kilo_bytes*1024;
		}

		else
		{
			cout<<"\n\nEnter cache size (in mega bytes) =\t";
			cin>>cache_size_in_mega_bytes;
			cache_size=cache_size_in_mega_bytes*1024*1024;	
		}
		
	}

	choice3=0;
	choice4=0;
	cout<<"\n\nDo you know the line size in bytes?(1/0) =\t";
	cin>>choice3;

	if(choice3)
	{
		cout<<"\n\nEnter line size (in bytes) =\t";
		cin>>line_size;
	}

	else
	{
		cout<<"\n\nDo you know the size of line in kilobytes?(1/0) =\t";
		cin>>choice4;	

		if(choice4)
		{
			cout<<"\n\nEnter line size (in kilo bytes) =\t";
			cin>>line_size_in_kilo_bytes;
			line_size=line_size_in_kilo_bytes*1024;
		}

		else
		{
			cout<<"\n\nEnter line size (in mega bytes) =\t";
			cin>>line_size_in_mega_bytes;
			line_size=line_size_in_mega_bytes*1024*1024;	
		}
		
	}

	choice3=0;
	choice4=0;
	
	cout<<"\n\nDo you know the size of address bus?(1/0) =\t";
	cin>>choice1;

	if(choice1)
	{
		cout<<"\n\nEnter the size of address bus =\t";
		cin>>address_size;

		main_memory_size=pow(2,address_size);
	}

	else
	{

		cout<<"\n\nDo you know the main memory size in bytes?(1/0) =\t";
		cin>>choice3;

		if(choice3)
		{
			cout<<"\n\nEnter main memory size (in bytes) =\t";
			cin>>main_memory_size;
		}

		else
		{
			cout<<"\n\nDo you know the size of main memory in kilobytes?(1/0) =\t";
			cin>>choice4;	

			if(choice4)
			{
				cout<<"\n\nEnter main memory size (in kilo bytes) =\t";
				cin>>main_memory_size_in_kilo_bytes;
				main_memory_size=main_memory_size_in_kilo_bytes*1024;
			}

			else
			{
				cout<<"\n\nEnter main memory size (in mega bytes) =\t";
				cin>>main_memory_size_in_mega_bytes;
				main_memory_size=main_memory_size_in_mega_bytes*1024*1024;
			}
			
		}

		address_size=log(main_memory_size)/log(2);
	}


	no_of_blocks=main_memory_size/line_size;

	no_of_lines_in_cache=cache_size/line_size;

	no_of_sets=no_of_lines_in_cache/k;

	word=log(line_size)/log(2);

	set=log(no_of_sets)/log(2);

	tag=address_size-(set+word);


	cout<<"\n\nThe Address Format in the form of Tag Set Word is as follows:\n"<<tag<<"\t"<<set<<"\t"<<word;

	cout<<"\n\nDo you want advanced information?(1/0) =\t";
	cin>>choice2;

	if(choice2)
	{
		clrscr();

		cout<<"For a "<<k<<"-way set associative mapping the following are the details:\n";

		cout<<"\n\nnumber of lines in set =\t"<<k<<"\n\naddress bus size =\t"<<address_size<<"\n\ncache size (in bytes) =\t"<<cache_size<<"\n\nblock size  (in bytes)=\t"<<line_size<<"\n\nmain memory size  (in bytes)=\t"<<main_memory_size<<"\n\nnumber of sets =\t"<<no_of_sets<<"\n\nnumber of blocks =\t"<<no_of_blocks<<"\n\nnumber of lines in cache =\t"<<no_of_lines_in_cache<<"\nsize of tag =\t"<<tag<<"\nsize of set =\t"<<set<<"\nsize of word =\t"<<word;
	}

}


void hexcode_working()
{

	clrscr();

	char input_by_user[10];

	cout<<"\n\nEnter Instruction:\t";

	gets(input_by_user);


	if(strcmpi(input_by_user, "ACI Data")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : CE";
	}
	if(strcmpi(input_by_user,"ADC A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 8F";
	}
	if(strcmpi(input_by_user,"ADC B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 88";
	}
	if(strcmpi(input_by_user,"ADC C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 89";
	}
	if(strcmpi(input_by_user,"ADC D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 8A";
	}
	if(strcmpi(input_by_user,"ADC E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 8B";
	}
	if(strcmpi(input_by_user,"ADC H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 8C";
	}
	if(strcmpi(input_by_user,"ADC L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 8D";
	}
	if(strcmpi(input_by_user,"ADC M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 8E";
	}
	if(strcmpi(input_by_user,"ADD A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 87";
	}
	if(strcmpi(input_by_user,"ADD B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 80";
	}
	if(strcmpi(input_by_user,"ADD C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 81";
	}
	if(strcmpi(input_by_user,"ADD D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 82";
	}
	if(strcmpi(input_by_user,"ADD E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 83";
	}
	if(strcmpi(input_by_user,"ADD H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 84";
	}
	if(strcmpi(input_by_user,"ADD L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 85";
	}
	if(strcmpi(input_by_user,"ADD M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 86";
	}
	if(strcmpi(input_by_user,"ADI Data")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : C6";
	}
	if(strcmpi(input_by_user,"ANA A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : A7";
	}
	if(strcmpi(input_by_user,"ANA B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : A0";
	}
	if(strcmpi(input_by_user,"ANA C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : A1";
	}
	if(strcmpi(input_by_user,"ANA D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : A2";
	}	
	if(strcmpi(input_by_user,"ANA E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : A3";
	}
	if(strcmpi(input_by_user,"ANA H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : A4";
	}
	if(strcmpi(input_by_user,"ANA L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : A5";
	}
	if(strcmpi(input_by_user,"ANA M")==0) //26
	{
		cout<<"The Hex code of "<<input_by_user<<" is : A6";
	}

	if(strcmpi(input_by_user,"ANI DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : E6";
	}
	if(strcmpi(input_by_user,"CALL LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : CD";
	}
	if(strcmpi(input_by_user,"CC LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : DC";
	}

	if(strcmpi(input_by_user,"CM LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : FC";
	}
	if(strcmpi(input_by_user,"CMA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 2F";
	}
	if(strcmpi(input_by_user,"CMC")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 3F";
	}
	if(strcmpi(input_by_user,"CMP A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : BF";
	}
	if(strcmpi(input_by_user,"CMP B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : B8";
	}
	if(strcmpi(input_by_user,"CMP C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : B9";
	}
	if(strcmpi(input_by_user,"CMP D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : BA";
	}
	if(strcmpi(input_by_user,"CMP E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : BB";
	}
	if(strcmpi(input_by_user,"CMP H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : BC";
	}
	if(strcmpi(input_by_user,"CMP L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : BD";
	}
	if(strcmpi(input_by_user,"CMP M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : BE";
	}
	if(strcmpi(input_by_user,"CNC LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : D4";
	}
	if(strcmpi(input_by_user,"CNZ LABEL")==0)  //42
	{
		cout<<"The Hex code of "<<input_by_user<<" is : C4";
	}
	if(strcmpi(input_by_user,"CP LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : F4";
	}
	if(strcmpi(input_by_user,"CPE LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : EC";
	}

	if(strcmpi(input_by_user,"CPI DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : FE";
	}
	if(strcmpi(input_by_user,"CPO LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : E4";
	}
	if(strcmpi(input_by_user,"CZ LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : CC";
	}
	if(strcmpi(input_by_user,"DAA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 27";
	}
	if(strcmpi(input_by_user,"DAD B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 09";
	}
	if(strcmpi(input_by_user,"DAD D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 19";
	}
	if(strcmpi(input_by_user,"DAD H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 29";
	}
	if(strcmpi(input_by_user,"DAD SP")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 39";
	}
	if(strcmpi(input_by_user,"DCR A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 3D";
	}	
	if(strcmpi(input_by_user,"DCR B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 05";
	}
	if(strcmpi(input_by_user,"DCR C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 0D";
	}
	if(strcmpi(input_by_user,"DCR D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 15";
	}
	if(strcmpi(input_by_user,"DCR E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 1D";
	}
	if(strcmpi(input_by_user,"DCR H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 25";
	}
	if(strcmpi(input_by_user,"DCR L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 2D";
	}
	if(strcmpi(input_by_user,"DCR M")==0) //60
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 35";
	}
	if(strcmpi(input_by_user,"DCX B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 0B";
	}	
	if(strcmpi(input_by_user,"DCX D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 1B";
	}
	if(strcmpi(input_by_user,"DCX H")==0)	
	{
			cout<<"The Hex code of "<<input_by_user<<" is : 2B";
	}
	if(strcmpi(input_by_user,"DCX SP")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 3B";
	}	
	if(strcmpi(input_by_user,"DI")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : F3";
	}
	if(strcmpi(input_by_user,"EI")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : FB";
	}
	if(strcmpi(input_by_user,"HLT")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 76";
	}		
	if(strcmpi(input_by_user,"IN PORT-ADRESS")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : DB";
	}
	if(strcmpi(input_by_user,"INR A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 3C";
	}		
	if(strcmpi(input_by_user,"INR B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 04";
	}	
	if(strcmpi(input_by_user,"INR C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 0C";
	}	
	if(strcmpi(input_by_user,"INR D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 14";
	}	
	if(strcmpi(input_by_user,"INR E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 1C";
	}	
	if(strcmpi(input_by_user,"INR H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 24";
	}
	if(strcmpi(input_by_user,"INR L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 2C";
	}		
	if(strcmpi(input_by_user,"INR M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 34";
	}
	if(strcmpi(input_by_user,"INX B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 03";
	}
	if(strcmpi(input_by_user,"INX D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 13";
	}		
	if(strcmpi(input_by_user,"INX H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 23";
	}	
	if(strcmpi(input_by_user,"INX SP")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 33";
	}	
	if(strcmpi(input_by_user,"JC LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : DA";
	}	
	if(strcmpi(input_by_user,"JM LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : FA";
	}
	if(strcmpi(input_by_user,"JMP LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : C3";
	}
	if(strcmpi(input_by_user,"JNC LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : D2";
	}
	if(strcmpi(input_by_user,"JNZ LABEL")==0) //85
	{
		cout<<"The Hex code of "<<input_by_user<<" is : C2";
	}
	if(strcmpi(input_by_user,"JP LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : F2";
	}	
	if(strcmpi(input_by_user,"JPE LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : EA";
	}
	if(strcmpi(input_by_user,"JPO LABEL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : E2";
	}
	if(strcmpi(input_by_user,"JZ LABEL")==0)     //89
	{
		cout<<"The Hex code of "<<input_by_user<<" is : CA";
	}
	if(strcmpi(input_by_user,"LDA ADDRESS")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 3A";
	}	
	if(strcmpi(input_by_user,"LDAX B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 0A";
	}
	if(strcmpi(input_by_user,"LDAX D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 1A";
	}
	if(strcmpi(input_by_user,"LHLD ADDRESS")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 2A";
	}
	if(strcmpi(input_by_user,"LXI B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 01";
	}
	if(strcmpi(input_by_user,"LXI D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 11";
	}
	if(strcmpi(input_by_user,"LXI H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 21";
	}
	if(strcmpi(input_by_user,"LXI SP")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 31";
	}
	if(strcmpi(input_by_user,"MOV A,A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 7F";
	}	
	if(strcmpi(input_by_user,"MOV A,B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 78";
	}
	if(strcmpi(input_by_user,"MOV A,C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 79";
	}	
	if(strcmpi(input_by_user,"MOV A,D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 7A";
	}	
	if(strcmpi(input_by_user,"MOV A,E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 7B";
	}	
	if(strcmpi(input_by_user,"MOV A,H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 7C";
	}
	if(strcmpi(input_by_user,"MOV A,L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 7D";
	}
	if(strcmpi(input_by_user,"MOV A,M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 7E";
	}
	if(strcmpi(input_by_user,"MOV B,A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 47";
	}
	if(strcmpi(input_by_user,"MOV B,B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 40";
	}
	if(strcmpi(input_by_user,"MOV B,C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 41";
	}
	if(strcmpi(input_by_user,"MOV B,D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 42";
	}	
	if(strcmpi(input_by_user,"MOV B,E")==0)
	{	
		cout<<"The Hex code of "<<input_by_user<<" is : 43";
	}
	if(strcmpi(input_by_user,"MOV B,H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 44";
	}
	if(strcmpi(input_by_user,"MOV B,L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 45";
	}
	if(strcmpi(input_by_user,"MOV B,M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 46";
	}		
	if(strcmpi(input_by_user,"MOV C,A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 4F";
	}		
	if(strcmpi(input_by_user,"MOV C,B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 48";
	}
	if(strcmpi(input_by_user,"MOV C,C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 49";
	}
	if(strcmpi(input_by_user,"MOV C,D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 4A";
	}
	if(strcmpi(input_by_user,"MOV C,E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 4B";
	}
	if(strcmpi(input_by_user,"MOV C,H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 4C";
	}
	if(strcmpi(input_by_user,"MOV C,L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 4D";
	}
	if(strcmpi(input_by_user,"MOV C,M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 4E";
	}
	if(strcmpi(input_by_user,"MOV D,A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 57";
	}
	if(strcmpi(input_by_user,"MOV D,B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 50";
	}
	if(strcmpi(input_by_user,"MOV D,C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 51";
	}
	if(strcmpi(input_by_user,"MOV D,D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 52";
	}
	if(strcmpi(input_by_user,"MOV D,E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 53";
	}	
	if(strcmpi(input_by_user,"MOV D,H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 54";
	}
	if(strcmpi(input_by_user,"MOV D,L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 55";
	}
	if(strcmpi(input_by_user,"MOV D,M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 56";
	}
	if(strcmpi(input_by_user,"MOV E,A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 5F";
	}
	if(strcmpi(input_by_user,"MOV E,B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 58";
	}
	if(strcmpi(input_by_user,"MOV E,C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 59";
	}
	if(strcmpi(input_by_user,"MOV E,D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 5A";
	}
	if(strcmpi(input_by_user,"MOV E,E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 5B";
	}
	if(strcmpi(input_by_user,"MOV E,H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 5C";	
	}	
	if(strcmpi(input_by_user,"MOV E,L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 5D";
	}
	if(strcmpi(input_by_user,"MOV E,M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 5E";
	}
	if(strcmpi(input_by_user,"MOV H,A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 67";
	}
	if(strcmpi(input_by_user,"MOV H,B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 60";
	}
	if(strcmpi(input_by_user,"MOV H,C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 61";
	}
	if(strcmpi(input_by_user,"MOV H,D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 62";
	}	
	if(strcmpi(input_by_user,"MOV H,E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 63";
	}
	if(strcmpi(input_by_user,"MOV H,H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 64";
	}	
	if(strcmpi(input_by_user,"MOV H,L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 65";
	}
	if(strcmpi(input_by_user,"MOV H,M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 66";
	}		
	if(strcmpi(input_by_user,"MOV L,A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 6F";
	}
	if(strcmpi(input_by_user,"MOV L,B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 68";
	}	
	if(strcmpi(input_by_user,"MOV L,C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 69";
	}	
	if(strcmpi(input_by_user,"MOV L,D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 6A";
	}
	if(strcmpi(input_by_user,"MOV L,E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 6B";
	}
	if(strcmpi(input_by_user,"MOV L,H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 6C";
	}
	if(strcmpi(input_by_user,"MOV L,L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 6D";
	}	
	if(strcmpi(input_by_user,"MOV L,M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 6E";
	}
	if(strcmpi(input_by_user,"MOV M,A")==0)	
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 77";
	}
	if(strcmpi(input_by_user,"MOV M,B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 70";
	}
	if(strcmpi(input_by_user,"MOV M,C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 71";
	}
	if(strcmpi(input_by_user,"MOV M,D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 72";
	}	
	if(strcmpi(input_by_user,"MOV M,E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 73";
	}
	if(strcmpi(input_by_user,"MOV M,H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 74";
	}
	if(strcmpi(input_by_user,"MOV M,L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 75";
	}
	if(strcmpi(input_by_user,"MVI A,DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 3E";
	}
	if(strcmpi(input_by_user,"MVI B,DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 06";
	}
	if(strcmpi(input_by_user,"MVI C,DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 0E";
	}
	if(strcmpi(input_by_user,"MVI D,DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 16";
	}
	if(strcmpi(input_by_user,"MVI E,DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 1E";
	}
	if(strcmpi(input_by_user,"MVI H,DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 26";
	}
	if(strcmpi(input_by_user,"MVI L,DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 2E";
	}	
	if(strcmpi(input_by_user,"MVI M,DATA")==0) //168
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 36";
	}
	if(strcmpi(input_by_user,"NOP")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 00";
	}
	if(strcmpi(input_by_user,"ORA A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : B7";
	}
	if(strcmpi(input_by_user,"ORA B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : B0";
	}
	if(strcmpi(input_by_user,"ORA C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : B1";
	}	
	if(strcmpi(input_by_user,"ORA D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : B2";
	}
	if(strcmpi(input_by_user,"ORA E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : B3";
	}
	if(strcmpi(input_by_user,"ORA H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : B4";
	}
	if(strcmpi(input_by_user,"ORA L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : B5";
	}		
	if(strcmpi(input_by_user,"ORA M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : B6";
	}	
	if(strcmpi(input_by_user,"ORI DATA")==0)
	{	
		cout<<"The Hex code of "<<input_by_user<<" is : F6";
	}
	if(strcmpi(input_by_user,"OUT PORT_ADDRESS")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : D3";
	}
	if(strcmpi(input_by_user,"PCHL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : E9";
	}
	if(strcmpi(input_by_user,"POP B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : C1";
	}
	if(strcmpi(input_by_user,"POP D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : D1";
	}
	if(strcmpi(input_by_user,"POP H")==0)       //183
	{
		cout<<"The Hex code of "<<input_by_user<<" is : E1";
	}
	if(strcmpi(input_by_user,"POP PSW")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : F1";
	}
	if(strcmpi(input_by_user,"PUSH B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : C5";
	}
	if(strcmpi(input_by_user,"PUSH D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : D5";
	}
	if(strcmpi(input_by_user,"PUSH H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : E5";
	}
	if(strcmpi(input_by_user,"PUSH PSW")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : F5";
	}
	if(strcmpi(input_by_user,"RAL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 17";
	}
	if(strcmpi(input_by_user,"RAR")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 1F";
	}
	if(strcmpi(input_by_user,"RC")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : D8";
	}
	if(strcmpi(input_by_user,"RET")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : C9";
	}
	if(strcmpi(input_by_user,"RIM")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 20";
	}
	if(strcmpi(input_by_user,"RLC")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 07";
	}
	if(strcmpi(input_by_user,"RM")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : F8";
	}
	if(strcmpi(input_by_user,"RNC")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : D0";
	}
	if(strcmpi(input_by_user,"RNZ")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : C0";
	}
	if(strcmpi(input_by_user,"RP")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : F0";
	}
	if(strcmpi(input_by_user,"RPE")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : E8";
	}
	if(strcmpi(input_by_user,"RPO")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : E0";
	}
	if(strcmpi(input_by_user,"RRC")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 0F";
	}
	if(strcmpi(input_by_user,"RST 0")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : C7";
	}
	if(strcmpi(input_by_user,"RST 1")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : CF";
	}
	if(strcmpi(input_by_user,"RST 2")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : D7";
	}
	if(strcmpi(input_by_user,"RST 3")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : DF";
	}
	if(strcmpi(input_by_user,"RST 4")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : E7";
	}
	if(strcmpi(input_by_user,"RST 5")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : EF";
	}
	if(strcmpi(input_by_user,"RST 6")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : F7";
	}
	if(strcmpi(input_by_user,"RST 7")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : FF";
	}
	if(strcmpi(input_by_user,"RZ")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : C8";
	}
	if(strcmpi(input_by_user,"SBB A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 9F";
	}
	if(strcmpi(input_by_user,"SBB B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 98";
	}
	if(strcmpi(input_by_user,"SBB C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 99";
	}
	if(strcmpi(input_by_user,"SBB D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 9A";
	}
	if(strcmpi(input_by_user,"SBB E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 9B";
	}
	if(strcmpi(input_by_user,"SBB H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 9C";
	}
	if(strcmpi(input_by_user,"SBB L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 9D";
	}
	if(strcmpi(input_by_user,"SBB M")==0)      //218
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 9E";
	}
	if(strcmpi(input_by_user,"SBI DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : DE";
	}
	if(strcmpi(input_by_user,"SHLD ADDRESS")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 22";
	}
	if(strcmpi(input_by_user,"SIM")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 30";
	}
	if(strcmpi(input_by_user,"SPHL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : F9";
	}
	if(strcmpi(input_by_user,"STA ADDRESS")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 32";
	}
	if(strcmpi(input_by_user,"STAX B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 02";
	}
	if(strcmpi(input_by_user,"STAX D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 12";
	}
	if(strcmpi(input_by_user,"STC")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 37";
	}
	if(strcmpi(input_by_user,"SUB A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 97";
	}
	if(strcmpi(input_by_user,"SUB B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 90";
	}
	if(strcmpi(input_by_user,"SUB C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 91";
	}
	if(strcmpi(input_by_user,"SUB D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 92";
	}
	if(strcmpi(input_by_user,"SUB E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 93";
	}
	if(strcmpi(input_by_user,"SUB H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 94";
	}
	if(strcmpi(input_by_user,"SUB L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 95";
	}
	if(strcmpi(input_by_user,"SUB M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : 96";
	}
	if(strcmpi(input_by_user,"SUI DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : D6";
	}
	if(strcmpi(input_by_user,"XCHG")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : EB";
	}
	if(strcmpi(input_by_user,"XRA A")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : AF";
	}
	if(strcmpi(input_by_user,"XRA B")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : A8";
	}
	if(strcmpi(input_by_user,"XRA C")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : A9";
	}
	if(strcmpi(input_by_user,"XRA D")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : AA";
	}
	if(strcmpi(input_by_user,"XRA E")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : AB";
	}
	if(strcmpi(input_by_user,"XRA H")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : AC";
	}
	if(strcmpi(input_by_user,"XRA L")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : AD";
	}
	if(strcmpi(input_by_user,"XRA M")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : AE";
	}
	if(strcmpi(input_by_user,"XRI DATA")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : EE";
	}
	if(strcmpi(input_by_user,"XTHL")==0)
	{
		cout<<"The Hex code of "<<input_by_user<<" is : E3";
	}

	  getch();
}


void myline(int x1, int y1, int x2, int y2, int color)
{
	int x, y;
	if(y1==y2) //horizontal line
	 {
		 for(x=x1, y=y1; (x<=x2); x++)
		 {
			  putpixel(x, y, color); delay(3);
		 }
	 }
}


void JC_AHEAD()
{ 
	 int gd=DETECT,gm;
	 initgraph(&gd,&gm,"C:\\tc\\bgi");
	 rectangle(50,1,630,470);
	 outtextxy(70,3,"OPCODE FETCH CYCLE");
	 outtextxy(300,3,"MEMORY READ CYCLE");
	 outtextxy(475,3,"MEMORY READ CYCLE");
	 line(50,11,630,11);
	 line(108,11,108,470);
	 line(166,11,166,470);
	 line(224,11,224,470);
	 line(282,1,282,470);
	 line(340,11,340,470);
	 line(398,11,398,470);
	 line(456,1,456,470);
	 line(514,11,514,470);
	 line(572,11,572,470);
	 outtextxy(70,13,"T1");
	 outtextxy(130,13,"T2");
	 outtextxy(190,13,"T3");
	 outtextxy(250,13,"T4");
	 outtextxy(310,13,"T1");
	 outtextxy(360,13,"T2");
	 outtextxy(420,13,"T3");
	 outtextxy(480,13,"T1");
	 outtextxy(530,13,"T2");
	 outtextxy(590,13,"T3");
	 line(50,21,630,21);
	 outtextxy(20,30,"CLK");
	 setcolor(2);
	 line(50,30,55,40);
	 myline(55,40,79,40,2);
	 line(79,40,84,30);
	 myline(84,30,108,30,2);
	 line(108,30,113,40);
	 myline(113,40,137,40,2);
	 line(137,40,142,30);
	 myline(142,30,166,30,2);
	 line(166,30,171,40);
	 myline(171,40,195,40,2);
	 line(195,40,200,30);
	 myline(200,30,224,30,2);
	 line(224,30,229,40);
	 myline(229,40,253,40,2);
	 line(253,40,258,30);
	 myline(258,30,282,30,2);
	 line(282,30,287,40);
	 myline(287,40,311,40,2);
	 line(311,40,316,30);
	 myline(316,30,340,30,2);
	 line(340,30,345,40);
	 myline(345,40,369,40,2);
	 line(369,40,374,30);
	 myline(374,30,398,30,2);
	 line(398,30,403,40);
	 myline(403,40,427,40,2);
	 line(427,40,432,30);
	 line(398,30,403,40);
	 myline(403,40,427,40,2);
	 line(427,40,432,30);
	 myline(432,30,456,30,2);
	 line(456,30,461,40);
	 myline(461,40,485,40,2);
	 line(485,40,490,30);
	 myline(490,30,514,30,2);
	 line(514,30,519,40);
	 myline(519,40,543,40,2);
	 line(543,40,548,30);
	 myline(548,30,572,30,2);
	 line(572,30,577,40);
	 myline(577,40,601,40,2);
	 line(601,40,606,30);
	 myline(606,30,630,30,2);
	 
	 setcolor(15);
	 outtextxy(4,70,"A15-A8");
	 setcolor(6);
	 line(50,70,55,70);
	 line(50,80,55,80);
	 line(55,70,57,74);
	 line(55,80,57,76);
	 line(57,75,62,70);
	 line(57,75,62,80);
	 line(62,70,228,70);
	 line(62,80,228,80);
	 outtextxy(66,72,"20High-Order Mem add");
	 line(228,70,230,74);
	 line(228,80,230,76);
	 line(230,75,232,70);
	 line(230,75,232,80);
	 line(232,70,285,70);
	 line(232,80,285,80);
	 outtextxy(236,72,"Unspec");
	 line(285,70,288,74);
	 line(285,80,288,76);
	 line(288,75,290,70);
	 line(288,75,290,80);
	 line(290,70,460,70);
	 line(290,80,460,80);
	 outtextxy(294,72,"20High-Order Mem add");
	 line(460,70,462,74);
	 line(460,80,462,76);
	 line(462,75,464,70);
	 line(462,75,464,80);
	 line(462,70,630,70);
	 line(462,80,630,80);
	 outtextxy(466,72,"20High-Order Mem add");
	 
	 setcolor(15);
	 outtextxy(0,110,"AD7-AD0");
	 setcolor(14);
	 line(50,110,55,110);
	 line(50,120,55,120);
	 line(55,110,57,114);
	 line(55,120,57,116);
	 line(57,114,59,110);
	 line(57,116,59,120);
	 line(59,110,110,110);
	 line(59,120,110,120);
	 setcolor(15);
	 outtextxy(60,112,"OC L.O");
	 outtextxy(60,122,"Mem add");
	 setcolor(14);
	 line(110,110,112,114);
	 line(110,120,112,116);
	 line(112,115,116,115);
	 line(120,115,124,115);
	 line(128,115,132,115);
	 line(136,115,140,115);
	 line(140,115,145,110);
	 line(145,110,185,110);
	 line(140,115,145,120);
	 line(145,120,185,120);
	 line(185,110,190,115);
	 line(185,120,190,115);
	 line(190,115,194,115);
	 setcolor(15);
	 outtextxy(140,112,"oprdDA");
	 setcolor(14);
	 line(198,115,202,115);
	 line(206,115,210,115);
	 line(214,115,218,115);
	 line(222,115,226,115);
	 line(230,115,234,115);
	 line(238,115,242,115);
	 line(246,115,250,115);
	 line(254,115,258,115);
	 line(262,115,266,115);
	 line(270,115,274,115);
	 line(278,115,282,115);
	 setcolor(15);
	 outtextxy(194,106,"Decodes opc");
	 setcolor(14);
	 line(282,115,287,110);
	 line(282,115,287,120);
	 line(287,110,335,110);
	 line(287,120,335,120);
	 line(335,110,340,115);
	 line(335,120,340,115);
	 setcolor(15);
	 outtextxy(286,112,"OD L.O");
	 outtextxy(286,122,"Mem add");
	 setcolor(14);
	 line(340,115,344,115);
	 line(348,115,352,115);
	 line(356,115,360,115);
	 line(364,115,368,115);
	 line(368,115,373,110);
	 line(368,115,373,120);
	 line(373,110,420,110);
	 line(373,120,420,120);
	 line(420,110,425,115);
	 line(420,120,425,115);
	 setcolor(15);
	 outtextxy(370,112,"op rd11");
	 setcolor(14);
	 line(425,115,429,115);
	 line(433,115,437,115);
	 line(441,115,445,115);
	 line(449,115,453,115);
	 line(453,115,458,110);
	 line(453,115,458,120);
	 line(458,110,509,110);
	 line(458,120,509,120);
	 line(509,110,514,115);
	 line(509,120,514,115);
	 setcolor(15);
	 outtextxy(460,112,"0E L.O");
	 outtextxy(460,122,"Mem add");
	 setcolor(14);
	 line(514,115,518,115);
	 line(522,115,526,115);
	 line(530,115,534,115);
	 line(538,115,542,115);
	 line(542,115,547,110);
	 line(542,115,547,120);
	 line(547,110,595,110);
	 line(547,120,595,120);
	 line(595,110,600,115);
	 line(595,120,600,115);
	 setcolor(15);
	 outtextxy(545,112,"oprd20");
	 setcolor(14);
	 line(600,115,604,115);
	 line(608,115,612,115);
	 line(616,115,620,115);
	 line(624,115,628,115);
	 
	 setcolor(15);
	 outtextxy(20,150,"ALE");
	 outtextxy(60,152,"1");
	 outtextxy(200,152,"0");
	 outtextxy(300,152,"1");
	 outtextxy(400,152,"0");
	 outtextxy(470,152,"1");
	 outtextxy(580,152,"0");
	 setcolor(1);
	 line(50,160,55,150);
	 myline(55,150,80,150,1);
	 line(80,150,85,160);
	 myline(85,160,282,160,1);
	 line(282,160,287,150);
	 myline(287,150,312,150,1);
	 line(312,150,317,160);
	 myline(317,160,456,160,1);
	 line(456,160,461,150);
	 myline(461,150,486,150,1);
	 line(486,150,491,160);
	 myline(491,160,630,160,1);

	 setcolor(15);
	 outtextxy(10,190,"IO/M'");
	 outtextxy(100,190,"IO/M'=0");
	 setcolor(5);
	 myline(50,200,630,200,5);
	 
	 setcolor(15);
	 outtextxy(20,230,"S1");
	 outtextxy(100,233,"S1=1");
	 setcolor(5);
	 myline(50,230,630,230,5);
	 
	 setcolor(15);
	 outtextxy(20,270,"S0");
	 outtextxy(100,273,"S0=1");
	 outtextxy(400,272,"S0=0");
	 setcolor(5);
	 line(50,280,55,270);
	 myline(55,270,282,270,5);
	 line(282,270,287,280);
	 myline(287,280,630,280,5);
	 
	 setcolor(15);
	 outtextxy(20,310,"RD'");
	 outtextxy(60,312,"RD'=1");
	 outtextxy(150,311,"RD'=0");
	 setcolor(4);
	 myline(50,310,118,310,4);
	 line(118,310,123,320);
	 myline(123,320,210,320,4);
	 line(210,320,215,310);
	 myline(215,310,342,310,4);
	 line(342,310,347,320);
	 myline(347,320,450,320,4);
	 myline(450,320,520,320,4);
	 line(520,320,525,310);
	 myline(525,310,630,310,4);

	 setcolor(15);
	 outtextxy(20,350,"WR'");
	 outtextxy(100,352,"WR'=1");
	 setcolor(4);
	 myline(50,350,630,350,4);
	 
	 getch();
	 closegraph();
}


void JNC_GO()
{
	 int gd=DETECT,gm;
	 initgraph(&gd,&gm,"C:\\tc\\bgi");
	 rectangle(50,1,630,470);
	 outtextxy(70,3,"OPCODE FETCH CYCLE");
	 outtextxy(300,3,"MEMORY READ CYCLE");
	 outtextxy(475,3,"MEMORY READ CYCLE");
	 line(50,11,630,11);
	 line(108,11,108,470);
	 line(166,11,166,470);
	 line(224,11,224,470);
	 line(282,1,282,470);
	 line(340,11,340,470);
	 line(398,11,398,470);
	 line(456,1,456,470);
	 line(514,11,514,470);
	 line(572,11,572,470);
	 outtextxy(70,13,"T1");
	 outtextxy(130,13,"T2");
	 outtextxy(190,13,"T3");
	 outtextxy(250,13,"T4");
	 outtextxy(310,13,"T1");
	 outtextxy(360,13,"T2");
	 outtextxy(420,13,"T3");
	 outtextxy(480,13,"T1");
	 outtextxy(530,13,"T2");
	 outtextxy(590,13,"T3");
	 line(50,21,630,21);
	 outtextxy(20,30,"CLK");
	 setcolor(2);
	 line(50,30,55,40);
	 myline(55,40,79,40,2);
	 line(79,40,84,30);
	 myline(84,30,108,30,2);
	 line(108,30,113,40);
	 myline(113,40,137,40,2);
	 line(137,40,142,30);
	 myline(142,30,166,30,2);
	 line(166,30,171,40);
	 myline(171,40,195,40,2);
	 line(195,40,200,30);
	 myline(200,30,224,30,2);
	 line(224,30,229,40);
	 myline(229,40,253,40,2);
	 line(253,40,258,30);
	 myline(258,30,282,30,2);
	 line(282,30,287,40);
	 myline(287,40,311,40,2);
	 line(311,40,316,30);
	 myline(316,30,340,30,2);
	 line(340,30,345,40);
	 myline(345,40,369,40,2);
	 line(369,40,374,30);
	 myline(374,30,398,30,2);
	 line(398,30,403,40);
	 myline(403,40,427,40,2);
	 line(427,40,432,30);
	 line(398,30,403,40);
	 myline(403,40,427,40,2);
	 line(427,40,432,30);
	 myline(432,30,456,30,2);
	 line(456,30,461,40);
	 myline(461,40,485,40,2);
	 line(485,40,490,30);
	 myline(490,30,514,30,2);
	 line(514,30,519,40);
	 myline(519,40,543,40,2);
	 line(543,40,548,30);
	 myline(548,30,572,30,2);
	 line(572,30,577,40);
	 myline(577,40,601,40,2);
	 line(601,40,606,30);
	 myline(606,30,630,30,2);
	 
	 setcolor(15);
	 outtextxy(4,70,"A15-A8");
	 setcolor(6);
	 line(50,70,55,70);
	 line(50,80,55,80);
	 line(55,70,57,74);
	 line(55,80,57,76);
	 line(57,75,62,70);
	 line(57,75,62,80);
	 line(62,70,228,70);
	 line(62,80,228,80);
	 outtextxy(66,72,"20High-Order Mem add");
	 line(228,70,230,74);
	 line(228,80,230,76);
	 line(230,75,232,70);
	 line(230,75,232,80);
	 line(232,70,285,70);
	 line(232,80,285,80);
	 outtextxy(236,72,"Unspec");
	 line(285,70,288,74);
	 line(285,80,288,76);
	 line(288,75,290,70);
	 line(288,75,290,80);
	 line(290,70,460,70);
	 line(290,80,460,80);
	 outtextxy(294,72,"20High-Order Mem add");
	 line(460,70,462,74);
	 line(460,80,462,76);
	 line(462,75,464,70);
	 line(462,75,464,80);
	 line(462,70,630,70);
	 line(462,80,630,80);
	 outtextxy(466,72,"20High-Order Mem add");
	 
	 setcolor(15);
	 outtextxy(0,110,"AD7-AD0");
	 setcolor(14);
	 line(50,110,55,110);
	 line(50,120,55,120);
	 line(55,110,57,114);
	 line(55,120,57,116);
	 line(57,114,59,110);
	 line(57,116,59,120);
	 line(59,110,110,110);
	 line(59,120,110,120);
	 setcolor(15);
	 outtextxy(60,112,"OC L.O");
	 outtextxy(60,122,"Mem add");
	 setcolor(14);
	 line(110,110,112,114);
	 line(110,120,112,116);
	 line(112,115,116,115);
	 line(120,115,124,115);
	 line(128,115,132,115);
	 line(136,115,140,115);
	 line(140,115,145,110);
	 line(145,110,185,110);
	 line(140,115,145,120);
	 line(145,120,185,120);
	 line(185,110,190,115);
	 line(185,120,190,115);
	 line(190,115,194,115);
	 setcolor(15);
	 outtextxy(140,112,"oprdD2");
	 setcolor(14);
	 line(198,115,202,115);
	 line(206,115,210,115);
	 line(214,115,218,115);
	 line(222,115,226,115);
	 line(230,115,234,115);
	 line(238,115,242,115);
	 line(246,115,250,115);
	 line(254,115,258,115);
	 line(262,115,266,115);
	 line(270,115,274,115);
	 line(278,115,282,115);
	 setcolor(15);
	 outtextxy(194,106,"Decodes opc");
	 setcolor(14);
	 line(282,115,287,110);
	 line(282,115,287,120);
	 line(287,110,335,110);
	 line(287,120,335,120);
	 line(335,110,340,115);
	 line(335,120,340,115);
	 setcolor(15);
	 outtextxy(286,112,"OD L.O");
	 outtextxy(286,122,"Mem add");
	 setcolor(14);
	 line(340,115,344,115);
	 line(348,115,352,115);
	 line(356,115,360,115);
	 line(364,115,368,115);
	 line(368,115,373,110);
	 line(368,115,373,120);
	 line(373,110,420,110);
	 line(373,120,420,120);
	 line(420,110,425,115);
	 line(420,120,425,115);
	 setcolor(15);
	 outtextxy(370,112,"op rd10");
	 setcolor(14);
	 line(425,115,429,115);
	 line(433,115,437,115);
	 line(441,115,445,115);
	 line(449,115,453,115);
	 line(453,115,458,110);
	 line(453,115,458,120);
	 line(458,110,509,110);
	 line(458,120,509,120);
	 line(509,110,514,115);
	 line(509,120,514,115);
	 setcolor(15);
	 outtextxy(460,112,"0E L.O");
	 outtextxy(460,122,"Mem add");
	 setcolor(14);
	 line(514,115,518,115);
	 line(522,115,526,115);
	 line(530,115,534,115);
	 line(538,115,542,115);
	 line(542,115,547,110);
	 line(542,115,547,120);
	 line(547,110,595,110);
	 line(547,120,595,120);
	 line(595,110,600,115);
	 line(595,120,600,115);
	 setcolor(15);
	 outtextxy(545,112,"oprd00");
	 setcolor(14);
	 line(600,115,604,115);
	 line(608,115,612,115);
	 line(616,115,620,115);
	 line(624,115,628,115);
	 
	 setcolor(15);
	 outtextxy(20,150,"ALE");
	 outtextxy(60,152,"1");
	 outtextxy(200,152,"0");
	 outtextxy(300,152,"1");
	 outtextxy(400,152,"0");
	 outtextxy(470,152,"1");
	 outtextxy(580,152,"0");
	 setcolor(1);
	 line(50,160,55,150);
	 myline(55,150,80,150,1);
	 line(80,150,85,160);
	 myline(85,160,282,160,1);
	 line(282,160,287,150);
	 myline(287,150,312,150,1);
	 line(312,150,317,160);
	 myline(317,160,456,160,1);
	 line(456,160,461,150);
	 myline(461,150,486,150,1);
	 line(486,150,491,160);
	 myline(491,160,630,160,1);
	 
	 setcolor(15);
	 outtextxy(10,190,"IO/M'");
	 outtextxy(100,190,"IO/M'=0");
	 setcolor(5);
	 myline(50,200,630,200,5);
	 
	 setcolor(15);
	 outtextxy(20,230,"S1");
	 outtextxy(100,233,"S1=1");
	 setcolor(5);
	 myline(50,230,630,230,5);
	 
	 setcolor(15);
	 outtextxy(20,270,"S0");
	 outtextxy(100,273,"S0=1");
	 outtextxy(400,272,"S0=0");
	 setcolor(5);
	 line(50,280,55,270);
	 myline(55,270,282,270,5);
	 line(282,270,287,280);
	 myline(287,280,630,280,5);
	 
	 setcolor(15);
	 outtextxy(20,310,"RD'");
	 outtextxy(60,312,"RD'=1");
	 outtextxy(150,311,"RD'=0");
	 setcolor(4);
	 myline(50,310,118,310,4);
	 line(118,310,123,320);
	 myline(123,320,210,320,4);
	 line(210,320,215,310);
	 myline(215,310,342,310,4);
	 line(342,310,347,320);
	 myline(347,320,450,320,4);
	 myline(450,320,520,320,4);
	 line(520,320,525,310);
	 myline(525,310,630,310,4);
	 
	 setcolor(15);
	 outtextxy(20,350,"WR'");
	 outtextxy(100,352,"WR'=1");
	 setcolor(4);
	 myline(50,350,630,350,4);
	 
	 getch();
	 closegraph();
}


void LXI_H_C050()
{
	 int gd=DETECT,gm;
	 initgraph(&gd,&gm,"C:\\tc\\bgi");
	 rectangle(50,1,630,470);
	 outtextxy(70,3,"OPCODE FETCH CYCLE");
	 outtextxy(300,3,"MEMORY READ CYCLE");
	 outtextxy(475,3,"MEMORY READ CYCLE");
	 line(50,11,630,11);
	 line(108,11,108,470);
	 line(166,11,166,470);
	 line(224,11,224,470);
	 line(282,1,282,470);
	 line(340,11,340,470);
	 line(398,11,398,470);
	 line(456,1,456,470);
	 line(514,11,514,470);
	 line(572,11,572,470);
	 outtextxy(70,13,"T1");
	 outtextxy(130,13,"T2");
	 outtextxy(190,13,"T3");
	 outtextxy(250,13,"T4");
	 outtextxy(310,13,"T1");
	 outtextxy(360,13,"T2");
	 outtextxy(420,13,"T3");
	 outtextxy(480,13,"T1");
	 outtextxy(530,13,"T2");
	 outtextxy(590,13,"T3");
	 line(50,21,630,21);
	 outtextxy(20,30,"CLK");
	 setcolor(2);
	 line(50,30,55,40);
	 myline(55,40,79,40,2);
	 line(79,40,84,30);
	 myline(84,30,108,30,2);
	 line(108,30,113,40);
	 myline(113,40,137,40,2);
	 line(137,40,142,30);
	 myline(142,30,166,30,2);
	 line(166,30,171,40);
	 myline(171,40,195,40,2);
	 line(195,40,200,30);
	 myline(200,30,224,30,2);
	 line(224,30,229,40);
	 myline(229,40,253,40,2);
	 line(253,40,258,30);
	 myline(258,30,282,30,2);
	 line(282,30,287,40);
	 myline(287,40,311,40,2);
	 line(311,40,316,30);
	 myline(316,30,340,30,2);
	 line(340,30,345,40);
	 myline(345,40,369,40,2);
	 line(369,40,374,30);
	 myline(374,30,398,30,2);
	 line(398,30,403,40);
	 myline(403,40,427,40,2);
	 line(427,40,432,30);
	 line(398,30,403,40);
	 myline(403,40,427,40,2);
	 line(427,40,432,30);
	 myline(432,30,456,30,2);
	 line(456,30,461,40);
	 myline(461,40,485,40,2);
	 line(485,40,490,30);
	 myline(490,30,514,30,2);
	 line(514,30,519,40);
	 myline(519,40,543,40,2);
	 line(543,40,548,30);
	 myline(548,30,572,30,2);
	 line(572,30,577,40);
	 myline(577,40,601,40,2);
	 line(601,40,606,30);
	 myline(606,30,630,30,2);
	 
	 setcolor(15);
	 outtextxy(4,70,"A15-A8");
	 setcolor(6);
	 line(50,70,55,70);
	 line(50,80,55,80);
	 line(55,70,57,74);
	 line(55,80,57,76);
	 line(57,75,62,70);
	 line(57,75,62,80);
	 line(62,70,228,70);
	 line(62,80,228,80);
	 outtextxy(66,72,"00High-Order Mem add");
	 line(228,70,230,74);
	 line(228,80,230,76);
	 line(230,75,232,70);
	 line(230,75,232,80);
	 line(232,70,285,70);
	 line(232,80,285,80);
	 outtextxy(236,72,"Unspec");
	 line(285,70,288,74);
	 line(285,80,288,76);
	 line(288,75,290,70);
	 line(288,75,290,80);
	 line(290,70,460,70);
	 line(290,80,460,80);
	 outtextxy(294,72,"00High-Order Mem add");
	 line(460,70,462,74);
	 line(460,80,462,76);
	 line(462,75,464,70);
	 line(462,75,464,80);
	 line(462,70,630,70);
	 line(462,80,630,80);
	 outtextxy(466,72,"00High-Order Mem add");
	 
	 setcolor(15);
	 outtextxy(0,110,"AD7-AD0");
	 setcolor(14);
	 line(50,110,55,110);
	 line(50,120,55,120);
	 line(55,110,57,114);
	 line(55,120,57,116);
	 line(57,114,59,110);
	 line(57,116,59,120);
	 line(59,110,110,110);
	 line(59,120,110,120);
	 setcolor(15);
	 outtextxy(60,112,"02 L.O");
	 outtextxy(60,122,"Mem add");
	 setcolor(14);
	 line(110,110,112,114);
	 line(110,120,112,116);
	 line(112,115,116,115);
	 line(120,115,124,115);
	 line(128,115,132,115);
	 line(136,115,140,115);
	 line(140,115,145,110);
	 line(145,110,185,110);
	 line(140,115,145,120);
	 line(145,120,185,120);
	 line(185,110,190,115);
	 line(185,120,190,115);
	 line(190,115,194,115);
	 setcolor(15);
	 outtextxy(140,112,"oprd21");
	 setcolor(14);
	 line(198,115,202,115);
	 line(206,115,210,115);
	 line(214,115,218,115);
	 line(222,115,226,115);
	 line(230,115,234,115);
	 line(238,115,242,115);
	 line(246,115,250,115);
	 line(254,115,258,115);
	 line(262,115,266,115);
	 line(270,115,274,115);
	 line(278,115,282,115);
	 setcolor(15);
	 outtextxy(194,106,"Decodes opc");
	 setcolor(14);
	 line(282,115,287,110);
	 line(282,115,287,120);
	 line(287,110,335,110);
	 line(287,120,335,120);
	 line(335,110,340,115);
	 line(335,120,340,115);
	 setcolor(15);
	 outtextxy(286,112,"O3 L.O");
	 outtextxy(286,122,"Mem add");
	 setcolor(14);
	 line(340,115,344,115);
	 line(348,115,352,115);
	 line(356,115,360,115);
	 line(364,115,368,115);
	 line(368,115,373,110);
	 line(368,115,373,120);
	 line(373,110,420,110);
	 line(373,120,420,120);
	 line(420,110,425,115);
	 line(420,120,425,115);
	 setcolor(15);
	 outtextxy(370,112,"op rd50");
	 setcolor(14);
	 line(425,115,429,115);
	 line(433,115,437,115);
	 line(441,115,445,115);
	 line(449,115,453,115);
	 line(453,115,458,110);
	 line(453,115,458,120);
	 line(458,110,509,110);
	 line(458,120,509,120);
	 line(509,110,514,115);
	 line(509,120,514,115);
	 setcolor(15);
	 outtextxy(460,112,"04 L.O");
	 outtextxy(460,122,"Mem add");
	 setcolor(14);
	 line(514,115,518,115);
	 line(522,115,526,115);
	 line(530,115,534,115);
	 line(538,115,542,115);
	 line(542,115,547,110);
	 line(542,115,547,120);
	 line(547,110,595,110);
	 line(547,120,595,120);
	 line(595,110,600,115);
	 line(595,120,600,115);
	 setcolor(15);
	 outtextxy(545,112,"oprdC0");
	 setcolor(14);
	 line(600,115,604,115);
	 line(608,115,612,115);
	 line(616,115,620,115);
	 line(624,115,628,115);
	 
	 setcolor(15);
	 outtextxy(20,150,"ALE");
	 outtextxy(60,152,"1");
	 outtextxy(200,152,"0");
	 outtextxy(300,152,"1");
	 outtextxy(400,152,"0");
	 outtextxy(470,152,"1");
	 outtextxy(580,152,"0");
	 setcolor(1);
	 line(50,160,55,150);
	 myline(55,150,80,150,1);
	 line(80,150,85,160);
	 myline(85,160,282,160,1);
	 line(282,160,287,150);
	 myline(287,150,312,150,1);
	 line(312,150,317,160);
	 myline(317,160,456,160,1);
	 line(456,160,461,150);
	 myline(461,150,486,150,1);
	 line(486,150,491,160);
	 myline(491,160,630,160,1);
	 
	 setcolor(15);
	 outtextxy(10,190,"IO/M'");
	 outtextxy(100,190,"IO/M'=0");
	 setcolor(5);
	 myline(50,200,630,200,5);
	 
	 setcolor(15);
	 outtextxy(20,230,"S1");
	 outtextxy(100,233,"S1=1");
	 setcolor(5);
	 myline(50,230,630,230,5);
	 
	 setcolor(15);
	 outtextxy(20,270,"S0");
	 outtextxy(100,273,"S0=1");
	 outtextxy(400,272,"S0=0");
	 setcolor(5);
	 line(50,280,55,270);
	 myline(55,270,282,270,5);
	 line(282,270,287,280);
	 myline(287,280,630,280,5);
	 
	 setcolor(15);
	 outtextxy(20,310,"RD'");
	 outtextxy(60,312,"RD'=1");
	 outtextxy(150,311,"RD'=0");
	 setcolor(4);
	 myline(50,310,118,310,4);
	 line(118,310,123,320);
	 myline(123,320,210,320,4);
	 line(210,320,215,310);
	 myline(215,310,342,310,4);
	 line(342,310,347,320);
	 myline(347,320,450,320,4);
	 myline(450,320,520,320,4);
	 line(520,320,525,310);
	 myline(525,310,630,310,4);
	 
	 setcolor(15);
	 outtextxy(20,350,"WR'");
	 outtextxy(100,352,"WR'=1");
	 setcolor(4);
	 myline(50,350,630,350,4);
	 
	 getch();
	 closegraph();
}

void JNZ_X()
{ 
	 int gd=DETECT,gm;
	 initgraph(&gd,&gm,"C:\\tc\\bgi");
	 rectangle(50,1,630,470);
	 outtextxy(70,3,"OPCODE FETCH CYCLE");
	 outtextxy(300,3,"MEMORY READ CYCLE");
	 outtextxy(475,3,"MEMORY READ CYCLE");
	 line(50,11,630,11);
	 line(108,11,108,470);
	 line(166,11,166,470);
	 line(224,11,224,470);
	 line(282,1,282,470);
	 line(340,11,340,470);
	 line(398,11,398,470);
	 line(456,1,456,470);
	 line(514,11,514,470);
	 line(572,11,572,470);
	 outtextxy(70,13,"T1");
	 outtextxy(130,13,"T2");
	 outtextxy(190,13,"T3");
	 outtextxy(250,13,"T4");
	 outtextxy(310,13,"T1");
	 outtextxy(360,13,"T2");
	 outtextxy(420,13,"T3");
	 outtextxy(480,13,"T1");
	 outtextxy(530,13,"T2");
	 outtextxy(590,13,"T3");
	 line(50,21,630,21);
	 outtextxy(20,30,"CLK");
	 setcolor(2);
	 line(50,30,55,40);
	 myline(55,40,79,40,2);
	 line(79,40,84,30);
	 myline(84,30,108,30,2);
	 line(108,30,113,40);
	 myline(113,40,137,40,2);
	 line(137,40,142,30);
	 myline(142,30,166,30,2);
	 line(166,30,171,40);
	 myline(171,40,195,40,2);
	 line(195,40,200,30);
	 myline(200,30,224,30,2);
	 line(224,30,229,40);
	 myline(229,40,253,40,2);
	 line(253,40,258,30);
	 myline(258,30,282,30,2);
	 line(282,30,287,40);
	 myline(287,40,311,40,2);
	 line(311,40,316,30);
	 myline(316,30,340,30,2);
	 line(340,30,345,40);
	 myline(345,40,369,40,2);
	 line(369,40,374,30);
	 myline(374,30,398,30,2);
	 line(398,30,403,40);
	 myline(403,40,427,40,2);
	 line(427,40,432,30);
	 line(398,30,403,40);
	 myline(403,40,427,40,2);
	 line(427,40,432,30);
	 myline(432,30,456,30,2);
	 line(456,30,461,40);
	 myline(461,40,485,40,2);
	 line(485,40,490,30);
	 myline(490,30,514,30,2);
	 line(514,30,519,40);
	 myline(519,40,543,40,2);
	 line(543,40,548,30);
	 myline(548,30,572,30,2);
	 line(572,30,577,40);
	 myline(577,40,601,40,2);
	 line(601,40,606,30);
	 myline(606,30,630,30,2);
	 
	 setcolor(15);
	 outtextxy(4,70,"A15-A8");
	 setcolor(6);
	 line(50,70,55,70);
	 line(50,80,55,80);
	 line(55,70,57,74);
	 line(55,80,57,76);
	 line(57,75,62,70);
	 line(57,75,62,80);
	 line(62,70,228,70);
	 line(62,80,228,80);
	 outtextxy(66,72,"00High-Order Mem add");
	 line(228,70,230,74);
	 line(228,80,230,76);
	 line(230,75,232,70);
	 line(230,75,232,80);
	 line(232,70,285,70);
	 line(232,80,285,80);
	 outtextxy(236,72,"Unspec");
	 line(285,70,288,74);
	 line(285,80,288,76);
	 line(288,75,290,70);
	 line(288,75,290,80);
	 line(290,70,460,70);
	 line(290,80,460,80);
	 outtextxy(294,72,"00High-Order Mem add");
	 line(460,70,462,74);
	 line(460,80,462,76);
	 line(462,75,464,70);
	 line(462,75,464,80);
	 line(462,70,630,70);
	 line(462,80,630,80);
	 outtextxy(466,72,"00High-Order Mem add");
	 
	 setcolor(15);
	 outtextxy(0,110,"AD7-AD0");
	 setcolor(14);
	 line(50,110,55,110);
	 line(50,120,55,120);
	 line(55,110,57,114);
	 line(55,120,57,116);
	 line(57,114,59,110);
	 line(57,116,59,120);
	 line(59,110,110,110);
	 line(59,120,110,120);
	 setcolor(15);
	 outtextxy(60,112,"OE L.O");
	 outtextxy(60,122,"Mem add");
	 setcolor(14);
	 line(110,110,112,114);
	 line(110,120,112,116);
	 line(112,115,116,115);
	 line(120,115,124,115);
	 line(128,115,132,115);
	 line(136,115,140,115);
	 line(140,115,145,110);
	 line(145,110,185,110);
	 line(140,115,145,120);
	 line(145,120,185,120);
	 line(185,110,190,115);
	 line(185,120,190,115);
	 line(190,115,194,115);
	 setcolor(15);
	 outtextxy(140,112,"oprdC2");
	 setcolor(14);
	 line(198,115,202,115);
	 line(206,115,210,115);
	 line(214,115,218,115);
	 line(222,115,226,115);
	 line(230,115,234,115);
	 line(238,115,242,115);
	 line(246,115,250,115);
	 line(254,115,258,115);
	 line(262,115,266,115);
	 line(270,115,274,115);
	 line(278,115,282,115);
	 setcolor(15);
	 outtextxy(194,106,"Decodes opc");
	 setcolor(14);
	 line(282,115,287,110);
	 line(282,115,287,120);
	 line(287,110,335,110);
	 line(287,120,335,120);
	 line(335,110,340,115);
	 line(335,120,340,115);
	 setcolor(15);
	 outtextxy(286,112,"OF L.O");
	 outtextxy(286,122,"Mem add");
	 setcolor(14);
	 line(340,115,344,115);
	 line(348,115,352,115);
	 line(356,115,360,115);
	 line(364,115,368,115);
	 line(368,115,373,110);
	 line(368,115,373,120);
	 line(373,110,420,110);
	 line(373,120,420,120);
	 line(420,110,425,115);
	 line(420,120,425,115);
	 setcolor(15);
	 outtextxy(370,112,"op rd05");
	 setcolor(14);
	 line(425,115,429,115);
	 line(433,115,437,115);
	 line(441,115,445,115);
	 line(449,115,453,115);
	 line(453,115,458,110);
	 line(453,115,458,120);
	 line(458,110,509,110);
	 line(458,120,509,120);
	 line(509,110,514,115);
	 line(509,120,514,115);
	 setcolor(15);
	 outtextxy(460,112,"10 L.O");
	 outtextxy(460,122,"Mem add");
	 setcolor(14);
	 line(514,115,518,115);
	 line(522,115,526,115);
	 line(530,115,534,115);
	 line(538,115,542,115);
	 line(542,115,547,110);
	 line(542,115,547,120);
	 line(547,110,595,110);
	 line(547,120,595,120);
	 line(595,110,600,115);
	 line(595,120,600,115);
	 setcolor(15);
	 outtextxy(545,112,"oprd00");
	 setcolor(14);
	 line(600,115,604,115);
	 line(608,115,612,115);
	 line(616,115,620,115);
	 line(624,115,628,115);

	 setcolor(15);
	 outtextxy(20,150,"ALE");
	 outtextxy(60,152,"1");
	 outtextxy(200,152,"0");
	 outtextxy(300,152,"1");
	 outtextxy(400,152,"0");
	 outtextxy(470,152,"1");
	 outtextxy(580,152,"0");
	 setcolor(1);
	 line(50,160,55,150);
	 myline(55,150,80,150,1);
	 line(80,150,85,160);
	 myline(85,160,282,160,1);
	 line(282,160,287,150);
	 myline(287,150,312,150,1);
	 line(312,150,317,160);
	 myline(317,160,456,160,1);
	 line(456,160,461,150);
	 myline(461,150,486,150,1);
	 line(486,150,491,160);
	 myline(491,160,630,160,1);
	 
	 setcolor(15);
	 outtextxy(10,190,"IO/M'");
	 outtextxy(100,190,"IO/M'=0");
	 setcolor(5);
	 myline(50,200,630,200,5);
	 
	 setcolor(15);
	 outtextxy(20,230,"S1");
	 outtextxy(100,233,"S1=1");
	 setcolor(5);
	 myline(50,230,630,230,5);
	 
	 setcolor(15);
	 outtextxy(20,270,"S0");
	 outtextxy(100,273,"S0=1");
	 outtextxy(400,272,"S0=0");
	 setcolor(5);
	 line(50,280,55,270);
	 myline(55,270,282,270,5);
	 line(282,270,287,280);
	 myline(287,280,630,280,5);
	 
	 setcolor(15);
	 outtextxy(20,310,"RD'");
	 outtextxy(60,312,"RD'=1");
	 outtextxy(150,311,"RD'=0");
	 setcolor(4);
	 myline(50,310,118,310,4);
	 line(118,310,123,320);
	 myline(123,320,210,320,4);
	 line(210,320,215,310);
	 myline(215,310,342,310,4);
	 line(342,310,347,320);
	 myline(347,320,450,320,4);
	 myline(450,320,520,320,4);
	 line(520,320,525,310);
	 myline(525,310,630,310,4);
	 
	 setcolor(15);
	 outtextxy(20,350,"WR'");
	 outtextxy(100,352,"WR'=1");
	 setcolor(4);
	 myline(50,350,630,350,4);
	 
	 getch();
	 closegraph();
}


void main()
{

	int option1=0, option2=0, option3=0;

	clrscr();

	do
	{
		clrscr();

		cout<<"\n\n\t\t\t\tWELCOME";
		cout<<"\n\n1) Cache Info";
		cout<<"\n\n2) HexCode of 8085 Instruction Set";
		cout<<"\n\n3) Timing Diagrams";
		cout<<"\n\n\nEnter your choice, please:\t";
		cin>>option1;

		switch(option1)
		{
			case 1:	clrscr();
					cache_working();
					break;


			case 2: clrscr();
					hexcode_working();
					break;
			

			case 3: clrscr();
					cout<<"\n\n\t\t\t\tTIMING DIAGRAMS";
					cout<<"\n\nWhich of the following timing diagrams would you like to see?";
					cout<<"\n\n1) JC AHEAD (Label)";
					cout<<"\n\n2) JNC GO (Label)";
					cout<<"\n\n3) LXI H, C050 (Address)";
					cout<<"\n\n4) JNZ X (Label)";
					cout<<"\n\n\nEnter you choice, please:\t";
					cin>>option2;

					switch(option2)
					{
						case 1:	JC_AHEAD();
								break;

						case 2:	JNC_GO();
								break;

						case 3: LXI_H_C050();
								break;

						case 4: JNZ_X();
								break;

						default: cout<<"\n\nWrong Selection"; getch();

					}

			default : cout<<"\n\nWrong Option"; getch();

		}

		getch();

		clrscr();

		cout<<"\n\nDo You want to see more?(1/0):\t";
		cin>>option3;

	}while(option3==1);
}