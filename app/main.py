from fastapi import FastAPI, UploadFile, File

app = FastAPI(
    title="C++ Image Processing Engine"
)

@app.get("/")
def root():
    return {"status": "healthy"}

@app.post("/upload")
async def upload_image(file: UploadFile = File(...)):
    contents = await file.read()

    return {
        "filename": file.filename,
        "content_type": file.content_type,
        "size_bytes": len(contents)
    }