from flask import Flask, render_template

app = Flask(__name__)

@app.route('/')
def index():
    # 1取参数 2调用参数 3跳转或输出响应内容
    return render_template("./index.html")

if __name__ == '__main__':
    app.run()
