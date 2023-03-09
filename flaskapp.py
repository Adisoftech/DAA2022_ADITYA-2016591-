from flask import * 
import os 
from inference import generatecartoon
app = Flask(__name__) 
PEOPLE_FOLDER = os.path.join('static', 'images') 
app.config['UPLOAD_FOLDER'] = PEOPLE_FOLDER
@app.route('/')  
def upload():  
    return render_template("upload.html")  

@app.route('/success', methods = ['POST'])  
def success():  
    if request.method == 'POST':  
        f = request.files['file'] 
        fname=os.path.join(app.config['UPLOAD_FOLDER'], f.filename)
        fname1=os.path.join('static/results', f.filename)
        f.save(fname)
        generatecartoon()
        return render_template("success.html", name = fname1)  
  
if __name__ == '__main__':  
    app.run(debug = True)