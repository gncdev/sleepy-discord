#include "slash_commands.h"

namespace SleepyDiscord {
	AppCommand::AppCommand(json::Value & json) :
		AppCommand(json::fromJSON<AppCommand>(json)) {
	}
	AppCommand::Option::Option(json::Value & json) :
		AppCommand::Option(json::fromJSON<AppCommand::Option>(json)) {
	}
	AppCommand::Option::Choice::Choice(json::Value & json) :
		AppCommand::Option::Choice(json::fromJSON<AppCommand::Option::Choice>(json)) {
	}
	InteractionData::InteractionData(json::Value & json) :
		InteractionData(json::fromJSON<InteractionData>(json)) {
	}
	InteractionData::Option::Option(json::Value & json) :
		InteractionData::Option(json::fromJSON<InteractionData::Option>(json)) {
	}
	InteractionCallback::EmptyData::EmptyData(json::Value & json) :
		InteractionCallback::EmptyData(json::fromJSON< InteractionCallback::EmptyData>(json)) {
	}
	InteractionCallback::Message::Message(json::Value & json) :
		InteractionCallback::Message(json::fromJSON<InteractionCallback::Message>(json)) {
	}
	InteractionCallback::Autocomplete::Autocomplete(json::Value & json) :
		InteractionCallback::Autocomplete(json::fromJSON<InteractionCallback::Autocomplete>(json)) {
	}
	Interaction::Interaction(json::Value & json) :
		Interaction(json::fromJSON<Interaction>(json)) {
	}
}