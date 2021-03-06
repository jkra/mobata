#ifndef PARSER_DECL_JUNCTIONDECLARATION_HPP
#define PARSER_DECL_JUNCTIONDECLARATION_HPP

#include "../../modeling_global.hpp"

#include "types.hpp"

#include <QVector>

namespace parser{ namespace decl{

struct MODELINGSHARED_EXPORT JunctionTarget
{
	JunctionTarget(const QString& tp=QLatin1String(""),
								 const QString& g=QLatin1String(""),
								 const QString& act=QLatin1String(""))
		:	targetPlace(tp), guard(g), actions(act)
	{}

	void reset() 
  {
    this->targetPlace=QLatin1String("");
    this->guard=QLatin1String("");
    this->actions=QLatin1String("");
  }
	
	QString toString() const
	{
		QString decl=QLatin1String(" to '")+this->targetPlace+QLatin1String("'");
		if(!this->guard.isEmpty() || !this->actions.isEmpty())
			decl+=QLatin1String(" with ");
		if(!this->guard.isEmpty())
			decl+=QLatin1String("[")+this->guard+QLatin1String("]");
		if(!this->actions.isEmpty())
			decl+=QLatin1String("/")+this->actions;
		
		return decl;
	}
	
	QString labelString() const
	{
		QString decl=QLatin1String("");
		if(!this->guard.isEmpty())
			decl+=QLatin1String("[")+this->guard+QLatin1String("]");
		if(!this->actions.isEmpty())
			decl+=QLatin1String("/")+this->actions;
		
		return decl;
	}
	
	QString formattedLabelString() const
	{
		QString formattedLabelString=this->labelString();
    formattedLabelString.replace(QLatin1String("/"),
                                 QLatin1String("/\n"));
		formattedLabelString.replace(QLatin1String(";"),
                                 QLatin1String(";\n"));
		
		return formattedLabelString;
	}

	QString targetPlace;
	QString guard;
	QString actions;
};

class MODELINGSHARED_EXPORT JunctionDeclaration
{
public:
	typedef QVector<JunctionTarget> JunctionTargetSet;
	
public:
	JunctionDeclaration();
	virtual ~JunctionDeclaration();
	
public:
	bool operator==(const JunctionDeclaration& other) const;
	
public:
	void											reset();
	void											setSource(const QString& placeName);
	void											setTrigger(const QString& triggerString);
	const QString&            getSource() const;
	const QString&            getTrigger() const;
	void											addTarget(const QString& placeName,
																			const QString& guardString,
																			const QString& actionString);
	void											addTarget(const JunctionTarget& target);
	const JunctionTargetSet&	getTargets() const;
	QString                   toString() const;

protected:
	QString           _source;
	QString           _trigger;
	JunctionTargetSet _targets;
};

}//end namespace decl

}//end namespace parser

#endif // PARSER_DECL_JUNCTIONDECLARATION_HPP
