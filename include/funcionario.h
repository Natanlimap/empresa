#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <datetime.h>

class Funcionario
{
public:
	Funcionario();
	Funcionario(std::string lnome, std::string lempresa, std::string ldepartamento, float lsalario, std::string ldata);


	//metodos set
	void setNome(std::string nome);
	void setEmpresa(std::string empresa);
	void setDepartamento(std::string departamento);
	void setSalario(float salario);
	void setData(std::string data);


	//metodos get
	std::string getNome();
	std::string getEmpresa();
	std::string getDepartamento();
	float getSalario();
	std::string getData();


	void listarSalarios();

private:
	std::string nome;
	std::string empresa;
	std::string departamento;
	float salario;
	std::string data;

	
	
};
#endif