//
// Created by crex on 31/05/18.
//

#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"
#include "git_cmd_descriptions.h"
#include "gsynth_generic_selections.h"


/* -------------------------- GIT AMENDING COMMANDS  -------------------------- */
void git_cmd_amending()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ AMENDING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git commit --amend" << "\n";
        std::cout << "USE: Combines staged changes with the previous commit instead of creating an entirely new commit. \n";
        std::cout << "     Can also be used to simply edit the previous commit message without changing its snapshot. \n";
        std::cout << "     Warning! Amending does not just alter the most recent commit, it replaces it entirely, meaning\n";
        std::cout << "     the amended commit will be a new entity with its own ref." << "\n\n";

        std::cout << "COMMAND: git reset HEAD <file>" << "\n";
        std::cout << "USE: Unstages <file>" << "\n\n";

        std::cout << "COMMAND: git checkout --<file>" << "\n";
        std::cout << "USE: Discards the changes of the defined file in the working directory." << "\n";
        std::cout << "     Warning! Any changes you made to that file are gone" << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_commit_--amend")
            git_amending_descriptions("git_commit_--amend");

        else if(cmd_options == "git_reset_HEAD_<file>")
            git_amending_descriptions("git_reset_HEAD_<file>");

        else if (cmd_options == "git_checkout_--<file>")
            git_amending_descriptions("git_checkout_--<file>");

        else if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}


/* -------------------------- GIT BRANCHING COMMANDS  -------------------------- */
void git_cmd_branching()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ BRANCHING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: " << "\n";
        std::cout << "USE: " << "\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        /*
        if(cmd_options == "git_")
            //EMPTY

        else if(cmd_options == "git_")
            //EMPTY*/

        if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}


/* -------------------------- GIT CONFIGURING COMMANDS  -------------------------- */
void git_cmd_configuring()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ CONFIGURATION COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "git config" << "\n";
        std::cout << "USE: Reads and writes contributor's git settings";
        std::cout << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_config")
            git_config_descriptions();

        else if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}


/* -------------------------- GIT LOG COMMANDS -------------------------- */
void git_cmd_log()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ LOG COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: " << "\n";
        std::cout << "USE: " << "\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        /*
        if(cmd_options == "git_")
            //EMPTY

        else if(cmd_options == "git_")
            //EMPTY*/

        if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}


/* -------------------------- GIT MANUAL COMMANDS  -------------------------- */
void git_cmd_manual()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ MANUAL COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git help <command>" << "\n";
        std::cout << "USE: Summon exhaustive help on how to use <command>" << "\n\n";

        std::cout << "COMMAND: man git-<command>" << "\n";
        std::cout << "USE: Summon exhaustive help on how to use <command>" << "\n\n";

        std::cout << "COMMAND: git <command> -h" << "\n";
        std::cout << "USE: gives more concise help. Example: git add -h" << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_help_<command>")
            git_manual_descriptions("git_help_<command>");

        else if(cmd_options == "man_git-<command>")
            git_manual_descriptions("man_git-<command>");

        else if(cmd_options == "git_<command>_-h")
            git_manual_descriptions("git_<command>_-h");

        else if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}


/* -------------------------- GIT REMOTE BRANCHES COMMANDS -------------------------- */
void git_cmd_remote_branches()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ MANAGING REMOTE BRANCHES COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: " << "\n";
        std::cout << "USE: " << "\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        /*
        if(cmd_options == "git_")
            //EMPTY

        else if(cmd_options == "git_")
            //EMPTY*/

        if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}


/* -------------------------- GIT REMOTE REPOSITORIES COMMANDS  -------------------------- */
void git_cmd_remote_repos()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ MANAGING REMOTE REPOSITORIES COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: " << "\n";
        std::cout << "USE: " << "\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        /*
        if(cmd_options == "git_")
            //EMPTY

        else if(cmd_options == "git_")
            //EMPTY*/

        if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}


/* -------------------------- GIT REMOTE TAGS COMMANDS -------------------------- */
void git_cmd_remote_tags()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ MANAGING REMOTE TAGS COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: " << "\n";
        std::cout << "USE: " << "\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        /*
        if(cmd_options == "git_")
            //EMPTY

        else if(cmd_options == "git_")
            //EMPTY*/

        if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}


/* -------------------------- GIT TAGGING COMMANDS -------------------------- */
void git_cmd_tagging()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ TAGGING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: " << "\n";
        std::cout << "USE: " << "\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        /*
        if(cmd_options == "git_")
            //EMPTY

        else if(cmd_options == "git_")
            //EMPTY*/

        if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}


/* -------------------------- GIT TRACKING COMMANDS  -------------------------- */
void git_cmd_tracking()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ TRACKING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git init" << "\n";
        std::cout << "USE: Start controlling a project directory with Git, you first need to go to that project’s directory" << "\n";

        std::cout << "COMMAND: git status" << "\n";
        std::cout << "USE: Shows which files are in which state" << "\n";

        std::cout << "COMMAND: git add" << "\n";
        std::cout << "USE: Starts tracking new files or stage files" << "\n";

        std::cout << "COMMAND: git commit" << "\n";
        std::cout << "USE: Creates commit. Launches your editor of choice." << "\n";

        std::cout << "COMMAND: git diff" << "\n";
        std::cout << "USE: Print what you’ve changed but not yet staged (except with --staged option)" << "\n";

        std::cout << "COMMAND: git difftool" << "\n";
        std::cout << "USE: Print diffs in another graphical or external diff viewing program instead." << "\n";
        std::cout << "    (Run git difftool --tool-help to see what is available on your system)" << "\n";
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        /*
        if(cmd_options == "git_")
            //EMPTY

        else if(cmd_options == "git_")
            //EMPTY*/

        if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}


/* -------------------------- GIT UNTRACKING COMMANDS  -------------------------- */
void git_cmd_untracking()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ UNTRACKING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: " << "\n";
        std::cout << "USE: " << "\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Select a command you want to learn how to use ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        /*
        if(cmd_options == "git_")
            //EMPTY

        else if(cmd_options == "git_")
            //EMPTY*/

        if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}
