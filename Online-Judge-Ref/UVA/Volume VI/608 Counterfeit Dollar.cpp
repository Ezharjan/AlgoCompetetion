/* 608 Counterfeit Dollar Accepted C++ 0.028 2011-02-02 09:37:24 */
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	while(scanf("%d",&n)==1){
		char c=getchar();
		int i;
		for(i=1;i<=n;i++){
			char str1[10],str2[10],str3[10];		
			int m[12][3]={0};
			int index[12]={0};
			int j,k;
			int time=3;	
			bool found=false;
			bool real[12]={false};
			while(time){
				scanf("%s%s%s",str1,str2,str3);
				if(strcmp(str3,"even")==0){
					for(j=0;str1[j]!='\0';j++)
						real[str1[j]-'A']=true;
					for(j=0;str2[j]!='\0';j++)
						real[str2[j]-'A']=true;}
				else if(strcmp(str3,"up")==0){
					for(j=0;str1[j]!='\0';j++)
						m[str1[j]-'A'][index[str1[j]-'A']++]=3;
					for(j=0;str2[j]!='\0';j++)
						m[str2[j]-'A'][index[str2[j]-'A']++]=1;}
				else{for(j=0;str1[j]!='\0';j++)
						m[str1[j]-'A'][index[str1[j]-'A']++]=1;
					for(j=0;str2[j]!='\0';j++)
						m[str2[j]-'A'][index[str2[j]-'A']++]=3;}
				time--;}
			for(int repeat=3;repeat>1&&!found;repeat--)
				for(j=0,found=false;j<12&&!found;j++){
					if(real[j]==true) continue;
					int temp;
					for(k=0;k<index[j];k++){					
						if(m[j][k]==0)	continue;
						temp=m[j][k];	break;}					
					for(int count=0;k<index[j]&&!found;k++){	
						if(m[j][k]==0)	continue;
						if(m[j][k]==temp){
							count++;
							if(count==repeat){
								found=true;
								if(temp==1)
									printf("%c is the counterfeit coin and it is light.\n",65+j);
								else				
									printf("%c is the counterfeit coin and it is heavy.\n",65+j);}}}}
			for(j=0;j<12&&!found;j++){
				if(real[j]==true) continue;				
				if(index[j]==1){
					found=true;
					if(m[j][index[j]-1]==1)
						printf("%c is the counterfeit coin and it is light.\n",65+j);
					else				
						printf("%c is the counterfeit coin and it is heavy.\n",65+j);}}	
			for(j=0;j<12&&!found;j++){
				if(real[j]==true) continue;
				if(index[j]==0){
					found=true;
					printf("%c is the counterfeit coin and it is heavy.\n",65+j);}
			}
		}
	}	
	return 0;
}
/*

Sally ���@���ȹ��]�Q�G�ӡ^�A�i�O�u��11�ӬO�u���A���@�ӬO�����]���O�����C��M�j�p���M�u���@�ˡ^�C�٦n���Ӱ��������q�M�u�����@�ˡA���L sally �����D���쩳�O��u�����٬O���C

�i�ߪ��O�A sally ���ӪB�ͭɥL�@�ӫD�`��Ǫ��ѥ��A���ӪB�ͦP�N�� Sally ���T���ӧ�X�����C�Ҧp�A��2�ӵw���A���G�ѥ����šA����o2�ӳ��O�u���C�p�G�Ψ䤤���@�ӯu���M�ĤT�ӵw���h���A�p�G�ѥ������šA���� sally�N���D�ĤT�ӵw���O�����C�P�ɥL�]�i�H�ھڤѥ��ӧP�_���Ӱ����쩳�O��u�����٬O���CSally �|�p�ߪ���ܯ�������k�A�o�˥L�~��έ�n���T����X���ӵw���O�����C 

��J���� �G

��J���Ĥ@�C���@�Ӿ�� n�A�N��H�U���X�մ��ո�ơC

�C�մ��ո�ƤT�C�A�C�C�N��@�������CSally ��L���w���s����A��L�C�C���������k���䪺�w����2�Ӧr���ܡ]Sally �`�O�b���k�����ۦP�ƥت��w���^�A���������G�� up, down, even �Ӫ�ܡA�N��ѥ����k��O���W�A���U�A�٬O���šC�аѦ�Sample Input�C

��X���� �G

��C�@�մ��ո�ƿ�X���@�ӵw���O�����A�åB�O�����٬O�����C�Ъ`�N�G���פ@�w�O�ߤ@���C��X�榡�аѦ�Sample Output�C

�d�ҿ�J �G 

2
ABCD EFGH even
ABCI EFJK up
ABIJ EFGH even
ABC DEF up
GHI JKL even
EF DA up

�d�ҿ�X �G

K is the counterfeit coin and it is light.
D is the counterfeit coin and it is light.���� �G

* ����½Ķ�GLucky �� �^ �� 

�X�B �G

ACM 608 

*/