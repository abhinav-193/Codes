1) calculate UFP(unadjusted function points)
	->user input
	->user output
	->enquiries
	->files
	->interfaces
	
	=c1*w+c2*w+c3*w+c4*w+c5*w	(every factor has some wieght)
	
	weight depends on types of project (simple, average and complex)
	values got from historical data
	
	types->		simple	average	complex
	input 		3 		4 		6
	output 		4 		5 		7
	inquiry 	3 		4	 	6
	files 		7 		10	 	15
	interfaces 	5 		7 		10
	
	
2)scales of influence level
	0->no influence
	1->incidental
	2->moderate
	3->average
	4->significant
	5->essential
	
3)calculating total degree of influence(DI)
	14* influence level
	
4) TCF (technical complexity factor) =0.65+0.01*DI

5) FP(function point)=UFP*TCF




(Q)
scale=essential
UI=36
UO=45
I=30
F=10
interface=12
complex

UFP=6*36+7*45+6*30+15*10+10*12
DI=14*5=70
TCF=0.7+0.65=1.35
FP=UFP*TCF




25 aug 2022

project size=64000loc
salary 50000 rs


MID SEM QUESTION FORMAT 
A-> 1MARK X 5QUES
B-> 5MARK X 3QUES

 ->	basic cocomo
 ->	activity diagram
 -> srs-case study	
 -> decision tree
 -> model
 -> function point metric
 
 
Q)
Task  Duration Immediate predecessor  ES EF		LS  LF
T1		10		-					  0  10		0	10		
T2		20		T1					  10 30		10	30
T3		10		T1					  10 20		20	30	
T4		30		T1					  10 40		10	40	
T5		30		T2,T3				  30 60		10	60
T6		20		T3,T4				  40 60		40	60	
T7		20		T5,T6				  60 80		60	80
T8		10		T6					  60 70		60	70
T9		10		T8					  70 80		70	80
T10		40		T7,T9 			 	  80 120	80 	120


Q) 250000, 40k loc, organic 6000 rs/pm
effort=2.4x(40k)^1.05=

Q) 60kloc 
type:utility S/W
the average production figure for developers is 10 loc per day
is this productivity better or worse than the avg case

3x(60k)^1.12=294.2PM
productivity=kloc/effort=60k/294.2x30	=6.7 (worse)

	->convert to day from person Month
development time=