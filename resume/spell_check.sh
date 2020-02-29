#!/usr/bin/env bash

red=`tput setaf 1`
green=`tput setaf 2`
yellow=`tput setaf 3`
reset=`tput sgr0`

output="$(cat RESUME.txt | aspell list --encoding=ascii --lang=en --personal=./.aspell.en.pws)"

if [[ $? != 0 ]]; then
    echo "${red}Aspell returned error.${reset}"
    exit 1
elif [[ $output ]]; then
    echo "${red}Aspell found spelling errors.${reset}"
    echo "${yellow}$output${reset}"
    exit 1
else
    echo "${green}Aspell check passed.${reset}"
    exit 0;
fi