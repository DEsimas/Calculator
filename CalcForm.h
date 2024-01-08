#pragma once

namespace L3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalcForm
	/// </summary>
	public ref class CalcForm : public System::Windows::Forms::Form
	{
	public:
		CalcForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ OutputTextBox;
	private: System::Windows::Forms::Button^ C;
	protected:



	private: System::Windows::Forms::Button^ CE;
	private: System::Windows::Forms::Button^ Equal;


	private: System::Windows::Forms::Button^ Add;

	private: System::Windows::Forms::Button^ Negate;

	private: System::Windows::Forms::Button^ Comma;

	private: System::Windows::Forms::Button^ N0;
	private: System::Windows::Forms::Button^ Inverse;


	private: System::Windows::Forms::Button^ Substract;

	private: System::Windows::Forms::Button^ N3;

	private: System::Windows::Forms::Button^ N2;

	private: System::Windows::Forms::Button^ N1;
	private: System::Windows::Forms::Button^ Percent;



	private: System::Windows::Forms::Button^ Multiplicate;

	private: System::Windows::Forms::Button^ N6;

	private: System::Windows::Forms::Button^ N5;

	private: System::Windows::Forms::Button^ N4;
	private: System::Windows::Forms::Button^ Sqrt;


	private: System::Windows::Forms::Button^ Divide;

	private: System::Windows::Forms::Button^ N9;

	private: System::Windows::Forms::Button^ N8;

	private: System::Windows::Forms::Button^ N7;

	private: System::Windows::Forms::Button^ Backspase;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->OutputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->C = (gcnew System::Windows::Forms::Button());
			this->CE = (gcnew System::Windows::Forms::Button());
			this->Equal = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Negate = (gcnew System::Windows::Forms::Button());
			this->Comma = (gcnew System::Windows::Forms::Button());
			this->N0 = (gcnew System::Windows::Forms::Button());
			this->Inverse = (gcnew System::Windows::Forms::Button());
			this->Substract = (gcnew System::Windows::Forms::Button());
			this->N3 = (gcnew System::Windows::Forms::Button());
			this->N2 = (gcnew System::Windows::Forms::Button());
			this->N1 = (gcnew System::Windows::Forms::Button());
			this->Percent = (gcnew System::Windows::Forms::Button());
			this->Multiplicate = (gcnew System::Windows::Forms::Button());
			this->N6 = (gcnew System::Windows::Forms::Button());
			this->N5 = (gcnew System::Windows::Forms::Button());
			this->N4 = (gcnew System::Windows::Forms::Button());
			this->Sqrt = (gcnew System::Windows::Forms::Button());
			this->Divide = (gcnew System::Windows::Forms::Button());
			this->N9 = (gcnew System::Windows::Forms::Button());
			this->N8 = (gcnew System::Windows::Forms::Button());
			this->N7 = (gcnew System::Windows::Forms::Button());
			this->Backspase = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// OutputTextBox
			// 
			this->OutputTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OutputTextBox->Location = System::Drawing::Point(12, 12);
			this->OutputTextBox->Multiline = true;
			this->OutputTextBox->Name = L"OutputTextBox";
			this->OutputTextBox->ReadOnly = true;
			this->OutputTextBox->Size = System::Drawing::Size(399, 100);
			this->OutputTextBox->TabIndex = 100;
			this->OutputTextBox->TabStop = false;
			this->OutputTextBox->Text = L"\r\n0";
			this->OutputTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// C
			// 
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C->ForeColor = System::Drawing::Color::DarkRed;
			this->C->Location = System::Drawing::Point(336, 118);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(75, 75);
			this->C->TabIndex = 24;
			this->C->TabStop = false;
			this->C->Text = L"C";
			this->C->UseVisualStyleBackColor = true;
			this->C->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// CE
			// 
			this->CE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CE->ForeColor = System::Drawing::Color::DarkRed;
			this->CE->Location = System::Drawing::Point(255, 118);
			this->CE->Name = L"CE";
			this->CE->Size = System::Drawing::Size(75, 75);
			this->CE->TabIndex = 23;
			this->CE->TabStop = false;
			this->CE->Text = L"CE";
			this->CE->UseVisualStyleBackColor = true;
			this->CE->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// Equal
			// 
			this->Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Equal->ForeColor = System::Drawing::Color::DarkGreen;
			this->Equal->Location = System::Drawing::Point(336, 442);
			this->Equal->Name = L"Equal";
			this->Equal->Size = System::Drawing::Size(75, 75);
			this->Equal->TabIndex = 7;
			this->Equal->Text = L"=";
			this->Equal->UseVisualStyleBackColor = true;
			this->Equal->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// Add
			// 
			this->Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add->ForeColor = System::Drawing::Color::DarkGreen;
			this->Add->Location = System::Drawing::Point(255, 442);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(75, 75);
			this->Add->TabIndex = 3;
			this->Add->Text = L"+";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// Negate
			// 
			this->Negate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Negate->ForeColor = System::Drawing::Color::DarkGreen;
			this->Negate->Location = System::Drawing::Point(174, 442);
			this->Negate->Name = L"Negate";
			this->Negate->Size = System::Drawing::Size(75, 75);
			this->Negate->TabIndex = 8;
			this->Negate->Text = L"+\\-";
			this->Negate->UseVisualStyleBackColor = true;
			this->Negate->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// Comma
			// 
			this->Comma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Comma->ForeColor = System::Drawing::Color::DarkBlue;
			this->Comma->Location = System::Drawing::Point(93, 442);
			this->Comma->Name = L"Comma";
			this->Comma->Size = System::Drawing::Size(75, 75);
			this->Comma->TabIndex = 19;
			this->Comma->TabStop = false;
			this->Comma->Text = L",";
			this->Comma->UseVisualStyleBackColor = true;
			this->Comma->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// N0
			// 
			this->N0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N0->Location = System::Drawing::Point(12, 442);
			this->N0->Name = L"N0";
			this->N0->Size = System::Drawing::Size(75, 75);
			this->N0->TabIndex = 18;
			this->N0->TabStop = false;
			this->N0->Text = L"0";
			this->N0->UseVisualStyleBackColor = true;
			this->N0->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// Inverse
			// 
			this->Inverse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Inverse->ForeColor = System::Drawing::Color::DarkGreen;
			this->Inverse->Location = System::Drawing::Point(336, 361);
			this->Inverse->Name = L"Inverse";
			this->Inverse->Size = System::Drawing::Size(75, 75);
			this->Inverse->TabIndex = 6;
			this->Inverse->Text = L"1/x";
			this->Inverse->UseVisualStyleBackColor = true;
			this->Inverse->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// Substract
			// 
			this->Substract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Substract->ForeColor = System::Drawing::Color::DarkGreen;
			this->Substract->Location = System::Drawing::Point(255, 361);
			this->Substract->Name = L"Substract";
			this->Substract->Size = System::Drawing::Size(75, 75);
			this->Substract->TabIndex = 2;
			this->Substract->Text = L"-";
			this->Substract->UseVisualStyleBackColor = true;
			this->Substract->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// N3
			// 
			this->N3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N3->Location = System::Drawing::Point(174, 361);
			this->N3->Name = L"N3";
			this->N3->Size = System::Drawing::Size(75, 75);
			this->N3->TabIndex = 15;
			this->N3->TabStop = false;
			this->N3->Text = L"3";
			this->N3->UseVisualStyleBackColor = true;
			this->N3->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// N2
			// 
			this->N2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N2->Location = System::Drawing::Point(93, 361);
			this->N2->Name = L"N2";
			this->N2->Size = System::Drawing::Size(75, 75);
			this->N2->TabIndex = 14;
			this->N2->TabStop = false;
			this->N2->Text = L"2";
			this->N2->UseVisualStyleBackColor = true;
			this->N2->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// N1
			// 
			this->N1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N1->Location = System::Drawing::Point(12, 361);
			this->N1->Name = L"N1";
			this->N1->Size = System::Drawing::Size(75, 75);
			this->N1->TabIndex = 13;
			this->N1->TabStop = false;
			this->N1->Text = L"1";
			this->N1->UseVisualStyleBackColor = true;
			this->N1->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// Percent
			// 
			this->Percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Percent->ForeColor = System::Drawing::Color::DarkGreen;
			this->Percent->Location = System::Drawing::Point(336, 280);
			this->Percent->Name = L"Percent";
			this->Percent->Size = System::Drawing::Size(75, 75);
			this->Percent->TabIndex = 5;
			this->Percent->Text = L"%";
			this->Percent->UseVisualStyleBackColor = true;
			this->Percent->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// Multiplicate
			// 
			this->Multiplicate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Multiplicate->ForeColor = System::Drawing::Color::DarkGreen;
			this->Multiplicate->Location = System::Drawing::Point(255, 280);
			this->Multiplicate->Name = L"Multiplicate";
			this->Multiplicate->Size = System::Drawing::Size(75, 75);
			this->Multiplicate->TabIndex = 1;
			this->Multiplicate->Text = L"×";
			this->Multiplicate->UseVisualStyleBackColor = true;
			this->Multiplicate->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// N6
			// 
			this->N6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N6->Location = System::Drawing::Point(174, 280);
			this->N6->Name = L"N6";
			this->N6->Size = System::Drawing::Size(75, 75);
			this->N6->TabIndex = 10;
			this->N6->TabStop = false;
			this->N6->Text = L"6";
			this->N6->UseVisualStyleBackColor = true;
			this->N6->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// N5
			// 
			this->N5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N5->Location = System::Drawing::Point(93, 280);
			this->N5->Name = L"N5";
			this->N5->Size = System::Drawing::Size(75, 75);
			this->N5->TabIndex = 9;
			this->N5->TabStop = false;
			this->N5->Text = L"5";
			this->N5->UseVisualStyleBackColor = true;
			this->N5->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// N4
			// 
			this->N4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N4->Location = System::Drawing::Point(12, 280);
			this->N4->Name = L"N4";
			this->N4->Size = System::Drawing::Size(75, 75);
			this->N4->TabIndex = 8;
			this->N4->TabStop = false;
			this->N4->Text = L"4";
			this->N4->UseVisualStyleBackColor = true;
			this->N4->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// Sqrt
			// 
			this->Sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sqrt->ForeColor = System::Drawing::Color::DarkGreen;
			this->Sqrt->Location = System::Drawing::Point(336, 199);
			this->Sqrt->Name = L"Sqrt";
			this->Sqrt->Size = System::Drawing::Size(75, 75);
			this->Sqrt->TabIndex = 4;
			this->Sqrt->Text = L"√";
			this->Sqrt->UseVisualStyleBackColor = true;
			this->Sqrt->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// Divide
			// 
			this->Divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Divide->ForeColor = System::Drawing::Color::DarkGreen;
			this->Divide->Location = System::Drawing::Point(255, 199);
			this->Divide->Name = L"Divide";
			this->Divide->Size = System::Drawing::Size(75, 75);
			this->Divide->TabIndex = 0;
			this->Divide->Text = L"÷";
			this->Divide->UseVisualStyleBackColor = true;
			this->Divide->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// N9
			// 
			this->N9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N9->Location = System::Drawing::Point(174, 199);
			this->N9->Name = L"N9";
			this->N9->Size = System::Drawing::Size(75, 75);
			this->N9->TabIndex = 5;
			this->N9->TabStop = false;
			this->N9->Text = L"9";
			this->N9->UseVisualStyleBackColor = true;
			this->N9->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// N8
			// 
			this->N8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N8->Location = System::Drawing::Point(93, 199);
			this->N8->Name = L"N8";
			this->N8->Size = System::Drawing::Size(75, 75);
			this->N8->TabIndex = 4;
			this->N8->TabStop = false;
			this->N8->Text = L"8";
			this->N8->UseVisualStyleBackColor = true;
			this->N8->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// N7
			// 
			this->N7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N7->Location = System::Drawing::Point(12, 199);
			this->N7->Name = L"N7";
			this->N7->Size = System::Drawing::Size(75, 75);
			this->N7->TabIndex = 3;
			this->N7->TabStop = false;
			this->N7->Text = L"7";
			this->N7->UseVisualStyleBackColor = true;
			this->N7->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// Backspase
			// 
			this->Backspase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Backspase->ForeColor = System::Drawing::Color::DarkRed;
			this->Backspase->Location = System::Drawing::Point(12, 118);
			this->Backspase->Name = L"Backspase";
			this->Backspase->Size = System::Drawing::Size(237, 75);
			this->Backspase->TabIndex = 2;
			this->Backspase->TabStop = false;
			this->Backspase->Text = L"Backspase";
			this->Backspase->UseVisualStyleBackColor = true;
			this->Backspase->Click += gcnew System::EventHandler(this, &CalcForm::Click);
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(429, 541);
			this->Controls->Add(this->C);
			this->Controls->Add(this->CE);
			this->Controls->Add(this->OutputTextBox);
			this->Controls->Add(this->Equal);
			this->Controls->Add(this->Backspase);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->N7);
			this->Controls->Add(this->Negate);
			this->Controls->Add(this->N8);
			this->Controls->Add(this->Comma);
			this->Controls->Add(this->N9);
			this->Controls->Add(this->N0);
			this->Controls->Add(this->Divide);
			this->Controls->Add(this->Inverse);
			this->Controls->Add(this->Sqrt);
			this->Controls->Add(this->Substract);
			this->Controls->Add(this->N4);
			this->Controls->Add(this->N3);
			this->Controls->Add(this->N5);
			this->Controls->Add(this->N2);
			this->Controls->Add(this->N6);
			this->Controls->Add(this->N1);
			this->Controls->Add(this->Multiplicate);
			this->Controls->Add(this->Percent);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"CalcForm";
			this->ShowIcon = false;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Текущий ввод
		System::String^ current = L"0";
		// Первое число
		System::String^ first = L"";
		// Второе число
		System::String^ second = L"";
		// Операция
		System::String^ operation = L"";
		/*
		Флаг
		* {true} -
		*	 при следующем нажатии нужно очистить все данные
		* {false} - штатная работа
		*/
		Boolean overwriteHard = false;
		/*
		* Флаг
		* {true} -
		*	 при следующем нажатии нужно очистить текущий ввод
		* {false} - штатная работа
		*/
		Boolean overwriteSoft = false;

		// Обработчик нажатия на кнопку с цифрой или запятую
		System::Void addDigit(System::String^ payload)
		{
			// Если число нужно перезаписать, перезаписываем
			if (overwriteHard)
			{
				overwriteHard = false;
				deleteAll();
			}
			// Если число нужно перезаписать, перезаписываем

			if (overwriteSoft)
			{
				overwriteSoft = false;
				deleteNumber();
			}

			// Если в числе будут незначащие нули, перезаписываем его
			if (current == L"0" && payload != L",")
			{
				current = payload;
				return;
			}
			// Не даём поставить два незначащих нуля
			// Не даём поставить две запятые
			if ((current == L"0" && payload == L"0") || (current->IndexOf(L",") != -1 && payload == L","))
				return;
			// Добавляем цифру справа
			current += payload;
		}

		// Обработчик нажатия на кнопку операции
		System::Void chooseOperation(System::String^ payload)
		{
			// Если число нужно перезаписать, перезаписываем
			if (overwriteHard)
			{
				overwriteHard = false;
				auto tmp = current;
				deleteAll();
				current = tmp;
			}
			// Если второго числа нет, устанавливаем на его место отформатированное текущее и запоминаем операцию
			if (first == L"")
			{
				current = convert(System::Convert::ToDouble(current->Replace(L",", ".")));
				first = current;
				current = L"0";
				operation = payload;
			}
			else
			{
				// Если все данные есть производим вычисление и ставим его результат в цепочку
				second = current;
				first = evaluateResult();
				current = first;
				second = L"";
				operation = payload;
				overwriteSoft = true;
			}
		}

		// Обработчик C
		System::Void deleteAll()
		{
			// Сброс всех переменных состояния
			current = L"0";
			first = L"";
			second = L"";
			operation = L"";
			overwriteHard = false;
		}

		// Обработчик CE
		System::Void deleteNumber()
		{
			current = L"0";
			// Если число нужно перезаписать, перезаписываем
			if (overwriteHard)
				deleteAll();
		}

		// Обработчик Backspace
		System::Void deleteDigit()
		{
			// Если число нужно перезаписать, перезаписываем
			if (overwriteHard)
			{
				auto tmp = current;
				deleteAll();
				try {
					System::Convert::ToDouble(tmp->Replace(L",", L"."));
					current = tmp;
				} catch(...) { }
				return;
			}

			// Если длина строки равна одному или её нужно перезаписать, сбрасываем её
			if (current->Length == 1 || overwriteSoft)
			{
				current = L"0";
				overwriteSoft = false;
				return;
			}

			// Убираем последний символ
			current = current->Remove(current->Length - 1);
			if (current->EndsWith(L","))
				current = current->Remove(current->Length - 1);
			if (current == L"-")
				current = L"0";
		}

		// Обработчик операций, влияющих только на текущее число
		System::Void modifyNumber(System::String^ payload)
		{
			try
			{
				// Если число нужно перезаписать, перезаписываем
				if (overwriteHard)
					deleteAll();
				// В зависимости от операции выполняем действие
				if (payload == L"neg")
					current = negate(current);
				if (payload == L"sqrt")
					current = sqrt(current);
				if (payload == L"inv")
					current = inverse(current);
				if (payload == L"%")
					current = percent(current);
				// Делаем число нередактируемым после выполнения операции
				overwriteSoft = true;
			} catch (...) { }
		}

		// Обработчик нажатия на равно
		System::Void evaluate() 
		{
			if (second == L"") // Подбираем число из строки ввода
				second = current;
			else
				first = current; // Если мы в цепочке результат это первое число след. операции
			// Если недостаточно данных, ничего не делаем
			if (first == L"" || second == L"" || operation == L"")
				return;
			// Выводим результат, сбрасываем остальные параметры
			current = evaluateResult();
			// Делаем число нередактируемым
			overwriteHard = true;
		}

		// Вычисляет результат на основе состояния
		System::String^ evaluateResult()
		{
			try
			{
				// Преобразование строк в числа
				const Double prev = System::Convert::ToDouble(first->Replace(L",", L"."));
				const Double curr = System::Convert::ToDouble(second->Replace(L",", L"."));
				// В {res} в зависимости от операции записывается результат
				System::Double res;
				if (operation == L"+")
					res = prev + curr;
				if (operation == L"-")
					res = prev - curr;
				if (operation == L"×")
					res = prev * curr;
				if (operation == L"÷") {
					if (curr == 0) {
						overwriteHard = true;
						return L"Делить на ноль нельзя";
					}
					res = prev / curr;
				}
				// Возвращаем отформатированную строку
				return convert(res);
			}
			catch (...)
			{
				return L"";
			}
		}

		// Умножает строковое представление числа на -1
		System::String^ negate(System::String^ number)
		{
			const auto n = System::Convert::ToDouble(number->Replace(L",", L"."));
			return convert(-n);
		}

		// Берёт квадратный корень из строкового представления числа
		System::String^ sqrt(System::String^ number)
		{
			const auto n = System::Convert::ToDouble(number->Replace(L",", L"."));
			if (n < 0) {
				overwriteHard = true;
				return L"Неверный знак чилса";
			}
			return convert(System::Math::Sqrt(n));
		}

		// Вычисляет обратное строковому представлению аргумента число
		System::String^ inverse(System::String^ number)
		{
			const auto n = System::Convert::ToDouble(number->Replace(L",", L"."));
			if (n == 0) {
				overwriteHard = true;
				return L"Делить на ноль нельзя";
			}
			return convert(1/n);
		}

		/*
		* В зависимости от операции преобразует число
		* либо в процентный множитель, либо в долю от числа
		*/
		System::String^ percent(System::String^ number)
		{
			// Если операция не задана, возвращаем 0
			if (operation == L"")
				return convert(0);
			const auto curr = System::Convert::ToDouble(number->Replace(L",", L"."));
			const auto prev = System::Convert::ToDouble(first->Replace(L",", L"."));
			// При умножении и делении преобразвываем процент в число
			if (operation == L"×" || operation == L"÷")
				return convert(curr / 100);
			// При сложении и вычитании берём указанный процент от прошлого числа
			if (operation == L"+" || operation == L"-")
				return convert(prev * curr / 100);
		}


		// Преобразует Double в String с нужным форматированием
		System::String^ convert(Double n)
		{
			return n.ToString()->Replace(L".", L",");
		}

		// Отображает текущее состояние формы
		System::Void render()
		{
			System::String^ firstLine = first + L" " + operation;
			if (second != L"")
				firstLine += L" " + second + L" =";
			System::String^ secondLine = current;
			// Составление массива для многострочного TextBox
			auto output = gcnew array<System::String^>{ firstLine, secondLine };
			OutputTextBox->Lines = output;
		}

		/*
		* Функция обработки нажатий на кнопки,
		* вызывают обработчик с нужными параметрами
		* и переписовку интерфейса
		*/
		System::Void Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Даункастим объект элемента к типу Button
			Button^ btn = safe_cast<Button^>(sender);
			// В зависимости от текста кнопки вызваем нужный обработчик
			if (btn->Text == L"Backspase")
				deleteDigit();
			else if (btn->Text == L"CE")
				deleteNumber();
			else if (btn->Text == L"C")
				deleteAll();
			else if (btn->Text == L"+" || btn->Text == L"-" || btn->Text == L"÷" || btn->Text == L"×")
				chooseOperation(btn->Text);
			else if (btn->Text == L"+\\-")
				modifyNumber(L"neg");
			else if (btn->Text == L"1/x")
				modifyNumber(L"inv");
			else if (btn->Text == L"√")
				modifyNumber(L"sqrt");
			else if (btn->Text == L"%")
				modifyNumber(L"%");
			else if (btn->Text == L"=")
				evaluate();
			else
				addDigit(btn->Text);
			// Вызываем ререндер формы
			render();
		}
	};
}
