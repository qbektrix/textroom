/***************************************************************************
 *   Copyright (C) 2006-2008 by Ian Reinhart Geiser                        *
 *   geiseri@yahoo.com                                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "pathshaped.h"

PathShaped::PathShaped(QGraphicsItem * parent, QGraphicsScene * scene)
 : QGraphicsPathItem(parent, scene)
{

}


PathShaped::~PathShaped()
{
}

void PathShaped::setRect(const QRectF & newRect)
{
	m_rect = newRect;

	QPainterPath myPath;

	myPath.moveTo( m_rect.left(), m_rect.top() + 15 );
	myPath.lineTo( m_rect.left(), ( m_rect.bottom() ));
	myPath.lineTo( m_rect.right(), ( m_rect.bottom() ));
	myPath.lineTo( m_rect.right(), ( m_rect.top() + 15  ));
	myPath.lineTo( m_rect.right(), ( m_rect.bottom() - 5 ));
	myPath.lineTo( m_rect.left(), ( m_rect.bottom() - 5));
	myPath.moveTo( m_rect.left(), m_rect.top() + 15 );


	setPath( myPath );
}

QRectF PathShaped::boundingRect() const
{
	return m_rect;
}

