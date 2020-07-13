#include <iostream>
#include <empresa.h>
#include <funcionario.h>
#include <string>

int main(int argc, char const *argv[])
{
	int count;
	float salario;
	std::string aux;
	Empresa empresa;

	std::cout << "Adicione as informacoes da empresa " << std::endl;
	std::cout << "Adicione o nome da empresa " << std::endl;

	getline(std::cin, aux);
	empresa.setNome(aux);
	
	std::cout << "Adicione o CNPJ da empresa " << std::endl;

	getline(std::cin, aux);
	empresa.setCNPJ(aux);
	

	std::cout << "Quantos funcionarios deseja adicionar?" << std::endl;
	std::cin >> count;
	std::cin.clear();
	std::cin.ignore();

	Funcionario newFunc;

	for (int i = 0; i < count; ++i)
	{

		std::cout << std::endl << "Adicione as informacoes do funcionario :" << i << std::endl;

		std::cout << "Qual o nome do funcionario " << i+1 << std::endl;
		getline(std::cin, aux);
		newFunc.setNome(aux);
	
		std::cout << "Qual o departamento do funcionario " << i+1 << std::endl;
		getline(std::cin, aux);
		newFunc.setDepartamento(aux);
		
		std::cout << "Qual o salario funcionario " << i + 1<< std::endl;
		std::cin >> salario;
		newFunc.setSalario(salario);
		std::cin.clear();
		std::cin.ignore();


		std::cout << "Qual a data de admissao do funcionario (xx/xx/xxxx) " << i + 1 << std::endl;
		getline(std::cin, aux);
		newFunc.setData(aux);

		empresa.addFuncionario(newFunc);
	}


	std::cout << "Demonstracao do salario dos funcionarios" << std::endl;
	empresa.listarSalarios();
	empresa.alterarSalarios(10, "ti");
	std::cout << "Aumento salarial de 10%" << std::endl;

	empresa.listarSalarios();

	return 0;
}