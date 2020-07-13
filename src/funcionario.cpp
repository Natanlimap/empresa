#include <funcionario.h>
	
	Funcionario::Funcionario(std::string lnome, std::string lempresa, std::string ldepartamento, float lsalario, std::string ldata)
	{
	 setNome(lnome);
	 setEmpresa(lempresa);
	 setDepartamento(ldepartamento);
	 setSalario(lsalario);
	 setData(ldata);

	}

	Funcionario::Funcionario()
	{
	

	}

	void Funcionario::setNome(std::string lnome)
	{
		this->nome = lnome;
	}
	void Funcionario::setEmpresa(std::string lempresa)
	{
		this->empresa = lempresa;
	}
	void Funcionario::setDepartamento(std::string ldepartamento)
	{
		this->departamento = ldepartamento ;
	}
	void Funcionario::setSalario(float lsalario)
	{
		this->salario = lsalario; 
	}
	void Funcionario::setData(std::string ldata)
	{
		this->data = ldata ;
	}



	//metodos set

	//metodos get
	std::string Funcionario::getNome(){
		return nome;
	}
	std::string Funcionario::getEmpresa(){
		return empresa;

	}
	std::string Funcionario::getDepartamento(){
		return departamento;

	}
	float Funcionario::getSalario(){
		return salario;

	}
	std::string Funcionario::getData(){
		return data;

	}
