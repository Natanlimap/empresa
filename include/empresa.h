#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>
#include <funcionario.h>
#include <vector>

class Empresa
{
public:
	Empresa();
	
	//metodos set
	void setNome(std::string l_nome);
	void setCNPJ(std::string l_CNPJ);
	void addFuncionario(Funcionario newFuncionario);
	//metodos get
	void getName(std::string l_nome);
	void getCNPJ(std::string l_CNPJ);
	

	void listarSalarios();
	void alterarSalarios(float mudanca, std::string _departamento);


private:
	
	std::string nome;
	std::string CNPJ;

	std::vector<Funcionario> funcionarios;
};
#endif