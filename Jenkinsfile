pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                g++ -std=c++11 helloworld.cpp -o out
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
