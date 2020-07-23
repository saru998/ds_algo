Instagram system design

    -upload photo
    -download photo
    -heavy read

API designs

    upload_photo(
        api_key,
        user_id,
        content
    )
    download_photo(
        api_key,
        user_id,
        content,
        offset
    )

Database designs

    User 
        -name
        -email
        -pass
        -date_of_birth
        -last_login
        -created_at
        -updated_at

    User_follows
        -user_id_1
        -user_id_2

    photo_content
        -photo_id
        -photo_path
        -user_id
        -created_at
        -updated_at

const upload = (req,res) =>{
    

}