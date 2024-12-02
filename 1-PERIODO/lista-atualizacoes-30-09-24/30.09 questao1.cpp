/*Crie uma struct para representar um Medico com as seguintes características: nome, crm(int),
especialidade. Crie uma função para inicializar os valores da struct. Em seguida, crie uma função
para mostrar na tela as informações do produto criado.*/
 #include<iostream>
 #include<string>
 using namespace std;
 struct medico{
 string nome;
 int crm;
string espec;

 void info(string nomeU, int crmU, string especU){
 nome=nomeU;
 crm=crmU;
 espec=especU;
 }

 void mostra(){
 cout<<"O medico "<<nome<<" com o crm de numero "<<crm<<" com a
especializacao "<<espec;
 }
};

int main(){
 medico p1;
 p1.info("Carlos",154254,"Dermatologista");
 p1.mostra();

 return 0;
}