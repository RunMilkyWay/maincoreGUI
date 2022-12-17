#pragma once
#include "Header.h"
#include "Class.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Student scholar();
	std::vector<Student> list;
	std::vector<int> fgrades;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			richTextBox1->Text = System::IO::File::ReadAllText("database.txt");
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ lOADToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sAVEASToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sortByToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ finalGradeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aBOUTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button6;








	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lOADToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sAVEASToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortByToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finalGradeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aBOUTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(12, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"LOAD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(93, 44);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SAVE AS";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"File";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->richTextBox1->Location = System::Drawing::Point(12, 73);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(558, 356);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(174, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Sort by";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(174, 44);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"NAME";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(255, 44);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"F GRADE";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aBOUTToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(582, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::SystemColors::Menu;
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem1,
					this->sortByToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->fileToolStripMenuItem->Text = L"MENU";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::fileToolStripMenuItem_Click);
			// 
			// fileToolStripMenuItem1
			// 
			this->fileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->lOADToolStripMenuItem,
					this->sAVEASToolStripMenuItem
			});
			this->fileToolStripMenuItem1->Name = L"fileToolStripMenuItem1";
			this->fileToolStripMenuItem1->Size = System::Drawing::Size(111, 22);
			this->fileToolStripMenuItem1->Text = L"File";
			// 
			// lOADToolStripMenuItem
			// 
			this->lOADToolStripMenuItem->Name = L"lOADToolStripMenuItem";
			this->lOADToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->lOADToolStripMenuItem->Text = L"LOAD";
			this->lOADToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::lOADToolStripMenuItem_Click);
			// 
			// sAVEASToolStripMenuItem
			// 
			this->sAVEASToolStripMenuItem->Name = L"sAVEASToolStripMenuItem";
			this->sAVEASToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->sAVEASToolStripMenuItem->Text = L"SAVE AS";
			this->sAVEASToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sAVEASToolStripMenuItem_Click);
			// 
			// sortByToolStripMenuItem
			// 
			this->sortByToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nameToolStripMenuItem,
					this->finalGradeToolStripMenuItem
			});
			this->sortByToolStripMenuItem->Name = L"sortByToolStripMenuItem";
			this->sortByToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->sortByToolStripMenuItem->Text = L"Sort by";
			// 
			// nameToolStripMenuItem
			// 
			this->nameToolStripMenuItem->Name = L"nameToolStripMenuItem";
			this->nameToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->nameToolStripMenuItem->Text = L"Name";
			this->nameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::nameToolStripMenuItem_Click);
			// 
			// finalGradeToolStripMenuItem
			// 
			this->finalGradeToolStripMenuItem->Name = L"finalGradeToolStripMenuItem";
			this->finalGradeToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->finalGradeToolStripMenuItem->Text = L"Final grade";
			this->finalGradeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::finalGradeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// aBOUTToolStripMenuItem
			// 
			this->aBOUTToolStripMenuItem->BackColor = System::Drawing::SystemColors::Menu;
			this->aBOUTToolStripMenuItem->Name = L"aBOUTToolStripMenuItem";
			this->aBOUTToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->aBOUTToolStripMenuItem->Text = L"ABOUT";
			this->aBOUTToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aBOUTToolStripMenuItem_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Location = System::Drawing::Point(336, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Export Data";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Location = System::Drawing::Point(336, 44);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(124, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"\\dir GOOD && BAD txt";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Location = System::Drawing::Point(466, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Calculator";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Location = System::Drawing::Point(466, 44);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(104, 23);
			this->button6->TabIndex = 11;
			this->button6->Text = L"OPEN";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 441);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"maincore GUI - Tomas";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			richTextBox1->Text = System::IO::File::ReadAllText(openFileDialog1->FileName);
		};
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::IO::File::WriteAllText(saveFileDialog1->FileName, richTextBox1->Text);
		};
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream datafile;
		datafile.open("database.txt");
		string str = "null", fname = "null", fsurname = "null";
		double fscore = 0;
		string arr[50];
		std::getline(datafile, str);
		int counter = wordnum(str);
		while (datafile.peek() != EOF) {
			std::getline(datafile, str);
			std::stringstream ss(str);
			for (int i = 0; i < counter; i++) {
				ss >> arr[i];
				if (i == 0) { fname = arr[i]; }
				else if (i == 1) { fsurname = arr[i]; }
				else if (i > 1 && i + 1 < counter) { fgrades.push_back(stoi(arr[i])); }
				else if (i + 1 == counter) { fscore = stoi(arr[i]); }
			};
			Student scholar(fname, fsurname, fgrades, fscore);
			list.push_back(scholar);
			fgrades.clear();
			//std::sort(list.begin(), list.end(), __lambda);
			//std::vector<Student>list2(newg.begin(), newg.end());

		}
		std::list<Student>newg(list.begin(), list.end());
		newg.sort(__lambda);
		std::vector<Student>goodgame(newg.begin(), newg.end());
		std::ofstream GoodGrade("temp.txt");
		GoodGrade << setw(15) << left << "Name" << setw(30) << left << "Surname" << setw(10) << left << "ND1" << setw(10) << left << "ND2" << setw(15) << left << "ND3" << setw(15) << left << "ND4" << setw(15) << left << "ND5" << setw(15) << left << "FINAL" << "\n";
		for (int i = 0; i < goodgame.size(); i++) {
			GoodGrade << setw(20) << left << goodgame[i].GetName() << setw(20) << left << goodgame[i].GetSurname() << setw(15) << left << goodgame[i].GetND1() << setw(15) << left << goodgame[i].GetND2() << setw(15) << left << goodgame[i].GetND3() << setw(15) << left << goodgame[i].GetND4() << setw(15) << left << goodgame[i].GetND5() << setw(15) << left << goodgame[i].GetFinal() << "\n";
		}
		datafile.close();
		GoodGrade.close();
		newg.clear();
		list.clear();
		goodgame.clear();


		richTextBox1->Text = System::IO::File::ReadAllText("temp.txt");

	}

		   //std::sort(list.begin(), list.end(), __lambda); //std::sort(list.begin(), list.end(), [](Student& lhs, Student& rhs) {return lhs.GetFinal() < rhs.GetFinal();});


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream datafile;
		datafile.open("database.txt");
		string str = "null", fname = "null", fsurname = "null";
		double fscore = 0;
		string arr[50];
		std::getline(datafile, str);
		int counter = wordnum(str);
		while (datafile.peek() != EOF) {
			std::getline(datafile, str);
			std::stringstream ss(str);
			for (int i = 0; i < counter; i++) {
				ss >> arr[i];
				if (i == 0) { fname = arr[i]; }
				else if (i == 1) { fsurname = arr[i]; }
				else if (i > 1 && i + 1 < counter) { fgrades.push_back(stoi(arr[i])); }
				else if (i + 1 == counter) { fscore = stoi(arr[i]); }
			};
			Student scholar(fname, fsurname, fgrades, fscore);
			list.push_back(scholar);
			fgrades.clear();
			//std::sort(list.begin(), list.end(), __lambda);
			//std::vector<Student>list2(newg.begin(), newg.end());

		}
		std::list<Student>newg(list.begin(), list.end());
		newg.sort(__lambda2);
		std::vector<Student>goodgame(newg.begin(), newg.end());
		std::ofstream GoodGrade("temp.txt");
		GoodGrade << setw(15) << left << "Name" << setw(30) << left << "Surname" << setw(10) << left << "ND1" << setw(10) << left << "ND2" << setw(15) << left << "ND3" << setw(15) << left << "ND4" << setw(15) << left << "ND5" << setw(15) << left << "FINAL" << "\n";
		for (int i = 0; i < goodgame.size(); i++) {
			GoodGrade << setw(20) << left << goodgame[i].GetName() << setw(20) << left << goodgame[i].GetSurname() << setw(15) << left << goodgame[i].GetND1() << setw(15) << left << goodgame[i].GetND2() << setw(15) << left << goodgame[i].GetND3() << setw(15) << left << goodgame[i].GetND4() << setw(15) << left << goodgame[i].GetND5() << setw(15) << left << goodgame[i].GetFinal() << "\n";
		}
		datafile.close();
		GoodGrade.close();
		newg.clear();
		list.clear();
		goodgame.clear();


		richTextBox1->Text = System::IO::File::ReadAllText("temp.txt");
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void fileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lOADToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->PerformClick();
	}
	private: System::Void sAVEASToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->PerformClick();
	}
	private: System::Void nameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button3->PerformClick();
	}
	private: System::Void finalGradeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button4->PerformClick();
	}
	private: System::Void aBOUTToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Tomas Vaiciunas", "Vilniaus Verslo Kolegija");
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream datafile;
		datafile.open("database.txt");
		string str = "null", fname = "null", fsurname = "null";
		double fscore = 0;
		string arr[50];
		std::getline(datafile, str);
		int counter = wordnum(str);
		while (datafile.peek() != EOF) {
			std::getline(datafile, str);
			std::stringstream ss(str);
			for (int i = 0; i < counter; i++) {
				ss >> arr[i];
				if (i == 0) { fname = arr[i]; }
				else if (i == 1) { fsurname = arr[i]; }
				else if (i > 1 && i + 1 < counter) { fgrades.push_back(stoi(arr[i])); }
				else if (i + 1 == counter) { fscore = stoi(arr[i]); }
			};
			Student scholar(fname, fsurname, fgrades, fscore);
			list.push_back(scholar);
			fgrades.clear();
			//std::sort(list.begin(), list.end(), __lambda);
			//std::vector<Student>list2(newg.begin(), newg.end());

		}
		std::list<Student>newg(list.begin(), list.end());
		newg.sort(__lambda);
		std::deque<Student>Good;
		std::deque<Student>Bad;
		std::vector<Student>goodgame(newg.begin(), newg.end());
		std::partition_copy(goodgame.begin(), goodgame.end(), std::back_inserter(Good), std::back_inserter(Bad), __lambda3);

		
		std::ofstream PoorGrade("BAD.txt");
		PoorGrade << "Name" << "\t" << "Surname" << "\t" << "FinalGrade" << "\n";
		for (int i = 0; i < Bad.size(); i++) {
			PoorGrade << Bad[i].GetName() << "\t" << Bad[i].GetSurname() << "\t" << Bad[i].GetFinal() << "\n";
		};


		std::ofstream GoodGrade("GOOD.txt");
		GoodGrade << "Name" << "\t" << "Surname" << "\t" << "FinalGrade" << "\n";
		for (int i = 0; i < Good.size(); i++) {
			GoodGrade << Good[i].GetName() << "\t" << Good[i].GetSurname() << "\t" << Good[i].GetFinal() << "\n";
		}
		MessageBox::Show("Good.txt && Bad.txt has been exported @\dir");
		GoodGrade.close();
		PoorGrade.close();
		datafile.close();
		newg.clear();
		list.clear();
		goodgame.clear();

	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("calc");
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
	
};
