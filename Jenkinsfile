pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                sh 'g++ -std=c++11 helloworld.cpp -o out'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
                sh './out'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
