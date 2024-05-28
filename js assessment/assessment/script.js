
function updateForm() {
    const bookingType = document.getElementById("bookingType").value;
    const dateContainer = document.getElementById("dateContainer");
    const timeSlotContainer = document.getElementById("timeSlotContainer");
    const timeContainer = document.getElementById("timeContainer");

    // Reset form
    dateContainer.style.display = "block";
    timeSlotContainer.style.display = "none";
    timeContainer.style.display = "none";

    if (bookingType === "fullDay") {
        // Full day booking, only show date
        timeSlotContainer.style.display = "none";
        timeContainer.style.display = "none";
    } else if (bookingType === "halfDay") {
        // Half day booking, show date and time slot
        timeSlotContainer.style.display = "block";
        timeContainer.style.display = "none";
    } else if (bookingType === "hourly") {
        // Hourly booking, show date and time
        dateContainer.style.display = "block";
        timeSlotContainer.style.display = "none";
        timeContainer.style.display = "block";
    }
}

document.getElementById("bookingForm").addEventListener("submit", function(event) {
    event.preventDefault(); // Prevents the form from submitting for this example
    alert("Booking submitted!");
});
