#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
 
using namespace std;
 
int main()
{
    string japanese[] = {"会社", "会議", "予定", "計画", "顧客", "商品", "価格", "申込書", "契約", "提案",
                         "収入", "支出", "予算", "利益", "損失", "支払い", "請求書", "給料", "費用", "割引",
                         "報告", "情報", "詳細", "資料", "説明", "理由", "例", "結果", "影響", "目的",
                         "経験", "機会", "問題", "解決策", "成功", "失敗", "予約", "案内", "交通", "旅行",
                         "状況", "条件", "環境", "関係", "改善", "変更", "決定", "増加", "減少", "責任"};

    string english[] = {"company", "meeting", "schedule", "plan", "customer", "product", "price", "application", "contract", "proposal",
                        "income", "expense", "budget", "profit", "loss", "payment", "invoice", "salary", "cost", "discount",
                        "report", "information", "detail", "document", "explanation", "reason", "example", "result", "effect", "purpose",
                        "experience", "opportunity", "problem", "solution", "success", "failure", "reservation", "guidance", "transportation", "trip",
                        "situation", "condition", "environment", "relationship", "improvement", "change", "decision", "increase", "decrease", "responsibility",};

    int size = 50;

    int correct = 0;
    int total = 0;

    srand(time(0));

    cout << "英単語クイズスタート！\n「exit」と入力すると終了するよ．\n";
    
    while(true){
        int index = rand() % size;

        cout << "\n日本語：" << japanese[index] << '\n';
        cout << "英語を入力（全て小文字で入力）：";

        string answer;
        cin >> answer;

        if(answer == "exit"){
            break;
        }

        total++;

        if(answer == english[index]){
            cout << "正解！" << '\n';
            correct++;
        }else{
            cout << "不正解！正解は" << english[index] << '\n';
        }

    }

    cout << "\n=== 結果 ===" << '\n';
        cout << "問題数：" << total << '\n';
        cout << "正解数：" << correct << '\n';

        if(total > 0){
            double rate = ((double)correct / total) * 100;
            cout << "正答率：" << rate << "%\n";
        }

    return 0;

}
