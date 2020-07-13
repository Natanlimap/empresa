#include <empresa.h>


	Empresa::Empresa(){
		
	}
	
	//metodos set
	void Empresa::setNome(std::string l_nome){
		this->nome = l_nome;
	}
	void Empresa::setCNPJ(std::string l_CNPJ){
		this->CNPJ = l_CNPJ;
	}
	void Empresa::addFuncionario(Funcionario newFuncionario){
		Funcionario auxiliar = newFuncionario;
		funcionarios.push_back(auxiliar);
	}
	//metodos get
	void Empresa::getName(std::string l_nome){

	}
	void Empresa::getCNPJ(std::string l_CNPJ){

	}

	void Empresa::listarSalarios(){

		for(auto e: funcionarios){
			std::cout << e.getSalario() << std::endl;
		}
	}

	void Empresa::alterarSalarios(float mudanca, std::string _departamento){

		for(auto &e: funcionarios){
			if(e.getDepartamento() == _departamento){
				e.setSalario(e.getSalario()*mudanca*0.01 + e.getSalario());
			}
		}
	}