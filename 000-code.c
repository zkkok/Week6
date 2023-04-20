pipeline{
    agent any
    environment{
        DIRECTORY_PATH = "C:\\Users\\zhenk\\Desktop\\uni\\T1 2023\\jenkis"
        TESTING_ENVIRONMENT = "Apache Server"
        PRODUCTION_ENVIRONMENT = "Zhen Kang"
    }
    stages{
        stage('Build'){
            steps{
                echo "Fetch the source code from $DIRECTORY_PATH "
                echo "Compile the code and generate any necessary artifact"
            }
        }
        stage('Test'){
            steps{
                echo "Unit tests"
                echo "Integration tests"
            }

        }
        stage('Code Quality Check'){
            steps{
                echo "Check the quality of the code"
            }
        }
        stage('Deploy'){
            steps{
                echo "Deploy the application to $TESTING_ENVIRONMENT"
            }
        }
        stage('Approval'){
            steps{
                sleep 10
            }
        }
        stage('Deploy to Production'){
            steps{
                echo "Deploy code to $PRODUCTION_ENVIRONMENT"
            }
        }
    }
}
