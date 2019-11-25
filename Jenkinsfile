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
    post {
        always {
            echo 'One way or another, I have finished'
            sh 'rm out'
        }
        success {
            echo 'I succeeeded!'
        }
        failure {
            echo 'I failed :('
        }
    }
}
