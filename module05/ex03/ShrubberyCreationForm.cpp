#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
     Form("ShrubberyCreationForm", 145, 137), target(target) {};

ShrubberyCreationForm::~ShrubberyCreationForm() {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s):
    Form(s.getName(), s.getSignGrade(), s.getExecGrade()), target(s.target) {};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s) {
  if (this != &s) {
    Form::operator=(s);
    target = s.target;
  }
  return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
  std::string tree = "             _{\\\\ _{\\\\{\\\\/}/}/}__,\n"
                   "             {/{/\\\\}{/{/\\\\}(\\\\}{/\\\\} _,\n"
                   "            {/{/\\\\}{/{/\\\\}(_)\\\\}{/{/\\\\}  _,\n"
                   "         {\\\\{/(\\\\}\\\\}{/{/\\\\}\\\\}{/){/\\\\}\\\\} /\\\\},\n"
                   "        {/{/(_)/}{\\\\{/)\\\\}{\\\\(_){/}/}/}/},\n"
                   "       _{\\\\{/{/{\\\\{/{/(_)/}/}/}{\\\\(/}/}/},\n"
                   "      {/{/{\\\\{\\\\{\\\\(/}{\\\\{\\\\/}/}{\\\\}(_){\\\\/}\\\\},\n"
                   "      _{\\\\{/{\\\\{/(_)\\\\}/}{/{/{/\\\\}\\\\})\\\\}{/\\\\},\n"
                   "     {/{/{\\\\{\\\\(/}{/{\\\\{\\\\{\\\\/})/}{\\\\(_)/}/}\\\\},\n"
                   "      {\\\\{\\\\/}(_){\\\\{\\\\{\\\\/}/}(_){\\\\/}{\\\\/}/})/},\n"
                   "       {/{\\\\{\\\\/}{/{\\\\{\\\\{\\\\/}/}{\\\\{\\\\/}/}\\\\}(_),\n"
                   "      {/{\\\\{\\\\/}{/){\\\\{\\\\{\\\\/}/}{\\\\{\\\\(/}/}\\\\}/},\n"
                   "       {/{\\\\{\\\\/}(_){\\\\{\\\\{\\\\(/}/}{\\\\(_)/}/}\\\\},\n"
                   "         {/({/{\\\\{/{\\\\{\\\\/}(_){\\\\/}/}\\\\}/}(\\\\},\n"
                   "          (_){/{\\\\/}{\\\\{\\\\/}/}{\\\\{\\\\)/}/}(_),\n"
                   "            {/{/{\\\\{\\\\/}{/{\\\\{\\\\{\\\\(_)/},\n"
                   "             {/{\\\\{\\\\{\\\\/}/}{\\\\{\\\\}/},\n"
                   "              {){/ {\\\\/}{\\\\/} \\\\}\\\\},\n"
                   "              (_)  \\\\.-'.-/,\n"
                   "          __...--- |'-.-'| --...__,\n"
                   "   _...--\\\"   .-'   |'-.-'|  ' -.  \\\"\\\"--..__,\n"
                   " -\\\"    \\' .  . \\'    |.\\'-._| \\'  . .  \\'   jro,\n"
                   " .  \\'-  \\'    .--\\'  | \\'-.\\'|    .  \\'  . \\',\n"
                   "          \\' ..     |\\'-_.-|,\n"
                   "  .  \\'  .       _.-|-._ -|-._  .  \\'  .,\n"
                   "              .\\'   |\\'- .-|   \\'.,\n"
                   "  ..-\\'   \\' .  \\'.   `-._.-   .\\'  \\'  - .,\n"
                   "   .-\\' \\'        \\'-._______.-\\'     \\'  .,\n";
  try {
    checkRequirements(executor);
  }
  catch (std::exception& e) {
    throw;
  }
  std::fstream fs;
  fs.open(target + "_shrubbery", std::fstream::out);
  fs << tree;
  fs.close();
}
